#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Person
{
protected:
    int NO; //编号
public:
    virtual void display() = 0; //输出相关信息
    Person(int NO) : NO(NO) {}
};
class Student : public Person
{
protected:
    int score[5];

public:
    Student(int no, int *s) : Person(no)
    {
        for (int i = 0; i < 5; i++)
            score[i] = s[i];
    }
    void display()
    {
        cout << NO << " ";
        int cnt = 0, sum = 0;
        for (int i = 0; i < 5; i++)
        {
            if (score[i] == -1)
                ++cnt;
            else
                sum += score[i];
        }
        cout << cnt;
        if (cnt == 5)
            cout << endl;
        else
            cout << " " << fixed << setprecision(1) << 1.0 * sum / (5-cnt) << endl;
    }
};
class Teacher : public Person
{
protected:
    int score[3];

public:
    Teacher(int no, int *s) : Person(no)
    {
        for (int i = 0; i < 3; i++)
            score[i] = s[i];
    }
    void display()
    {
        cout << NO << " " << score[0] + score[1] + score[2]<<endl;
    }
};
int main()
{
    Person *pp[10];
    int type;
    int cnt = 0;
    int NO;
    int score[5];
    while (true)
    {
        cin >> type;
        switch (type)
        {
        case 1:
            cin >> NO;
            for (int i = 0; i < 5; i++)
                cin >> score[i];
            pp[cnt++] = new Student(NO, score);
            break;
        case 2:
            cin >> NO;
            for (int i = 0; i < 3; i++)
                cin >> score[i];
            pp[cnt++] = new Teacher(NO, score);
            break;
        default:
            for (int i = 0; i < cnt; i++)
            {
                if (pp[i] != NULL)
                    pp[i]->display();
            }
            return 0;
            break;
        }
    }
}