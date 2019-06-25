 
#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    string complex;
    cin >> complex;
    if (complex[complex.length() - 1] != 'i') //判断输入的复数虚部是否为0，只需判断末尾字符有无"i"
    {
        cout << "complex " << complex << endl
             << "the real part is " << complex << endl;
        cout << "and the imaginary part is 0";
        return 0;
    }
    int flag = 0;
    for (int i = 1; complex[i]; i++) //判断输入的复数实部是否为0，转化为判断字符中有无"+"/"-"
        if (complex[i] == '+' || complex[i] == '-')
        {
            flag = 1;
            break;
        }
    if (flag == 0)
    {
        cout << "complex " << complex << endl
             << "the real part is 0" << endl;
