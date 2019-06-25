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
