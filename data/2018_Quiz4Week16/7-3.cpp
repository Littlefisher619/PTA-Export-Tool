#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person
{
protected:
    string name; //姓名
    int age;     //年龄
public:
    Person(){};
    Person(string a, int b) : name(a), age(b){};
    void display() { cout << name << ":" << age << endl; }
};
//学生类
class Student : public Person
{
    int ID;          //学号
    float cpp_score; //cpp上机成绩
    float cpp_count; //cpp上机考勤
    float cpp_grade; //cpp总评成绩
public:
    void operator=(Student &a)
    {
        name = a.name;
        age = a.age;
        ID = a.ID;
        cpp_score = a.cpp_score;
        cpp_count = a.cpp_count;
        cpp_grade = a.cpp_grade;
        //cout<<name<<ID<<cpp_grade<<"stu ";
    }
    float getGrade() { return cpp_grade; }
    Student() : Person(){};
    void display() { cout << ID << " " << name << " " << setiosflags(ios::fixed) << setprecision(1) << cpp_grade << endl; }
    Student(string a, int b, int c, float d, float e) : Person(a, b), ID(c), cpp_score(d), cpp_count(e) { cpp_grade = cpp_score * 0.9 + cpp_count * 2; }
};
//教师类
class Teacher : public Person
{
    int ID; //教师工号
    Student stu[100];
    int count;
    float cpp_average;

public:
    Teacher(string a, int b, int c) : Person(a, b), ID(c){};
    void setCount(int a) { count = a; }
    void Add(Student &stu1)
    {
        stu[count - 1] = stu1;
    };
    void average()
    {
        float ans = 0;
        for (int i = 0; i < count; i++)
        {
            ans += stu[i].getGrade();
        }
        cpp_average = ans / count;
    };
    void print()
    {
        cout << ID << " "
             << name << " "
             << count << " "
             << setiosflags(ios::fixed) << setprecision(1)
             << cpp_average << endl;
        for (int i = 0; i < count; i++)
        {
            stu[i].display();
        }
    };
};
int main()
{

    string name;
    int age, num, count;
    float score;
    //教师
    cin >> name >> num >> age;
    Teacher t(name, age, num);
    int sum = 0;
    //学生
    cin >> name;
    while (name[0] != '0')
    {
        sum++;
        cin >> num >> age >> score >> count;
        Student stu(name, age, num, score, count);
        t.setCount(sum);
        t.Add(stu);
        cin >> name;
    }
    t.average();
    t.print();

    return 0;
}