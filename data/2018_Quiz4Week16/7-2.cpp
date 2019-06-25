#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person() {}
    Person(string name, int age) : name(name), age(age) {}
    void display() { cout << name << ":" << age << endl; }
};
class Student : public Person
{                    //公有继承Person基类
    int ID;          //学号
    float cpp_score; //cpp上机成绩
    float cpp_count; //cpp上机考勤
    float cpp_grade; //cpp总评成绩
public:
    Student() : Person() {}
    Student(string name, int age, int id, float s, float c) : Person(name, age), ID(id), cpp_score(s), cpp_count(c), cpp_grade(s * 0.9 + c * 2) {}
    void print()
    { //输出当前student的信息
        cout << ID << " " << name << " " << setiosflags(ios::fixed)<<setprecision(1)<< cpp_grade <<endl;
    }
};
int main()
{
    string name;
    float s, c;
    int a,id;
    while (1)
    {
        cin >> name;
        if (name == "0")
            break;
        cin >> id >> a >> s >> c;
        Student stu(name, a, id, s, c);
        stu.print();
    }
}
