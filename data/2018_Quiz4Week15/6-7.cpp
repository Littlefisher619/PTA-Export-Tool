#include <iostream>
#include <string>
using namespace std;

/* 请在这里填写答案 */
class Student
{
	string name;
	int score;
	int id;
	static int count;
public:
	Student(){};
	friend istream& operator>>(istream &is,Student &stu);
	friend ostream& operator<<(ostream &os,const Student &stu);
};
istream& operator>>(istream &is,Student &stu){
		is>>stu.name>>stu.score;
		stu.id=++Student::count;
		return is;
} 
ostream& operator<<(ostream &os,const Student &stu){
	os<<stu.id<<". "<<stu.name<<(stu.score>=60?" PASS":" FAIL");
	return os;
} 
int Student::count=0;
int main(){
    int i, repeat;
    Student st;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        cin>>st;
        cout<<st<<endl;
    }
    return 0;
}
