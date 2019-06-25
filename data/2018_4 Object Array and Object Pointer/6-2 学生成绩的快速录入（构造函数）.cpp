class Student
{
    int no,score;
public:
    static int count;
    Student(int no,int score):no(no),score(score){++count;};
    Student(const Student &stu):no(stu.no+1),score(stu.score){++count;}
    void display(){cout<<no<<(score?" Pass":" Fail")<<endl;}
 
};
int Student::count=0;
