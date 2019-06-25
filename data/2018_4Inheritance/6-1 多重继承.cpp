#include<iostream>
#include<cstring>
using namespace std;
 
class Student
{
protected:
    string name;
    float age,score;
public:
    Student(string name,int age,float score):name(name),age(age),score(score){};
};
 
class Teacher
{
protected:
    string name;
    string title;
    int age;
public:
    Teacher(string name,string title,int age):name(name),title(title),age(age){};
};
 
class Graduate:  public Student,public Teacher{
protected:
    char sex;
    float wages;
