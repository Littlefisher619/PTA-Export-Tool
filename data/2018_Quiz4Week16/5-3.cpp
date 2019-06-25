#include <iostream>
using namespace std;
class Student
 {public:
   
Student(int num,float score):num(num),score(score){}
   void display();
  private:
   int num;
   float score;
 };

void Student::display()
 {cout<<num<<" "<<score<<endl;}

int main()
{
  Student stud[5]={
  Student(101,78.5),Student(102,85.5),Student(103,98.5),
  Student(104,100.0),Student(105,95.5)}; //定义对象数组
    Student* p=stud;
 for(;;)
  p->display();
 return 0;
 }
}