# -*- coding: utf-8 -*-
from selenium import webdriver
from selenium.webdriver.support.wait import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.by import By
from selenium.common.exceptions import TimeoutException
import time, os, html2text, random, re
import traceback

PROBLEM_SETS_URL = "https://pintia.cn/problem-sets?tab=1&filter=active"
LOGIN_URL = "https://pintia.cn/auth/login"
cookies = {'JSESSIONID': '',
           'OMSSession': '',
           'PTASession': ''}
FILE_SUFFIXES = {'GCC': '.c', 'GXX': '.cpp', 'JAVA': '.java', 'PYTHON': '.py'}

browser = webdriver.Chrome()
browser.implicitly_wait(3)
browser.get(LOGIN_URL)
for k, v in cookies.items():
    browser.add_cookie({'name': k, 'value': v})

browser.get(PROBLEM_SETS_URL)
WebDriverWait(browser, 3, 0.5).until(
    EC.presence_of_element_located((By.XPATH, '//*[@id="sparkling-daydream"]/div[3]/div[3]/div/div[3]')))
problemsets = browser.find_elements_by_xpath('//*[@id="sparkling-daydream"]/div[3]/div[3]/div/div[3]/div')

queue = []
print('Fetching problems-sets to dump...')
for i in problemsets:
    atag = i.find_element_by_tag_name('a')
    status = i.find_element_by_xpath('div[1]/div[1]/div').text

    if status == '进行中':
        queue.append((atag.text, atag.get_attribute('href')))
        print(atag.text, atag.get_attribute('href'))
print('Problem-Sets in total:', len(queue))

for setname, seturl in queue:
    time.sleep(2 + random.random() * 2)
    print('Dump', setname, '...')

    browser.get(seturl + '/problems/type/1')
    WebDriverWait(browser, 3, 0.5).until(
        EC.presence_of_element_located((By.CLASS_NAME, 'nav-item')))
    navitems = browser.find_elements_by_class_name('nav-item')
    typetodump = []
    problemstodump = []

    for i in navitems:
        if '函数题' in i.text or ('编程题' in i.text):
            typetodump.append(i.find_element_by_tag_name('a').get_attribute('href'))

    print('Fetching problems to dump...')
    for typeurl in typetodump:
        time.sleep(2 + random.random() * 2)
        browser.get(typeurl)
        WebDriverWait(browser, 3, 0.5).until(
            EC.presence_of_element_located((By.CLASS_NAME, 'DataTable_g1c32')))
        problems = browser.find_elements_by_tag_name('tr')[1:]
        for j in problems:
            tds = j.find_elements_by_xpath('*')
            pid = tds[1].text
            ptitle = tds[2].text
            purl = tds[2].find_element_by_tag_name('a').get_attribute('href')
            problemstodump.append((pid, ptitle, purl))
            print(pid, ptitle, purl)

    print('Problems in total:', len(problemstodump))

    basedir = os.path.join('data', re.sub(r'[\\/:\*\?"<>|]', '', setname), '')
    if not os.path.exists(basedir):
        os.makedirs(basedir)

    for pid, ptitle, purl in problemstodump:
        trycount = 0
        while True:
            try:
                time.sleep(random.random() * 1)
                print('Fetching content of', pid, ptitle, '...', end='')
                browser.get(purl)
                locator = (By.XPATH, '//*[@id="sparkling-daydream"]/div[3]/div[3]/div/div[4]/div[1]')
                WebDriverWait(browser, 2, 0.5).until(
                    EC.presence_of_element_located(locator))
                innerHTML = browser.find_element_by_xpath(
                    '//*[@id="sparkling-daydream"]/div[3]/div[3]/div/div[4]/div[1]').get_attribute('innerHTML')

                print('Converting to .md ...', end='')
                filename = pid + ' ' + re.sub(r'[\\/:\*\?"<>|]', '', ptitle)
                mdfile = open(basedir + filename + '.md', 'w', encoding='utf-8')
                mdfile.write('# %s %s\r\n' % (pid, ptitle))
                mdfile.write(html2text.HTML2Text().handle(innerHTML))
                mdfile.close()

                print('Exporting sourcecode...', end='')
                sourcecodetype = browser.find_element_by_tag_name('select').get_attribute('value')
                divcodelines = browser.find_elements_by_class_name('view-line')
                sourcecodefile = open(basedir + filename + FILE_SUFFIXES[sourcecodetype], 'w', encoding='utf-8')
                for codeline in divcodelines:
                    sourcecodefile.write(codeline.text + '\n')
                sourcecodefile.close()


                print('Done!')
                break
            except TimeoutException as err:
                trycount += 1
                print('Timeout!')
                if trycount >= 2:
                    c = input('Would you want to retry? [y/n]').strip().lower()
                    if c == 'n':
                        break
                    else:
                        pass
                else:
                    print('Retrying for', pid, ptitle, '...')

    print(setname.capitalize(), 'dumped!')

print('OK! All problem-sets have been dumped.')
browser.close()
