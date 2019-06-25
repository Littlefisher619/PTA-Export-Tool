class Student
{
protected:
    string num, name;
 
public:
    Student(string num, string name) : num(num), name(name) {}
    static double max;
    virtual void display() = 0;
    virtual double avg() = 0;
};
double Student::max = 0;
class GroupA : public Student
{
protected:
    int s1, s2;
 
public:
    GroupA(string num, string name, int s1, int s2) : Student(num, name), s1(s1), s2(s2)
    {
        if (avg() > Student::max)
        {
            Student::max = avg();
        }
    }
    double avg()
    {
