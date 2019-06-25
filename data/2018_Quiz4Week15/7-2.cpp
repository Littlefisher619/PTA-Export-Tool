#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int chinese, math, english, zh;

public:
    student()
    {
        name = "0";
        chinese = 0;
        math = 0;
        english = 0;
        zh = 0;
    };
    void set(string name1, int chinese1, int math1, int english1, int zh1)
    {
        name = name1;
        chinese = chinese1;
        math = math1;
        english = english1;
        zh = zh1;
    }
    friend student top(const student *p, int count);
};
student top(const student *p, int count)
{
    int max = 0;
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = p[i].chinese + p[i].math + p[i].english + p[i].zh;
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
    return *p;
}
int main()
{
    student s[100];
    string name;
    int num = 0;
    int chinese, math, english, zh;
    cin >> name;
    while (name != "0")
    {
        cin >> chinese >> math >> english >> zh;
        s[num].set(name, chinese, math, english, zh);
        num++;
        cin >> name;
    }
    top(s, num);
    return 0;
}