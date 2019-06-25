#include<iostream>

using namespace std;
class Circle
{
private:
    double rad;
    double area;
    
    friend istream& operator>>(istream&in, Circle &cl);       //重载>>为Circle类的友元函数
    friend ostream& operator<<(ostream&out, Circle &cl);        //重载<<为Circle类的友元函数
public:
    Circle(double r=0)
    {
        rad=r;
        area=3.14*r*r;
    }
    double operator-(Circle &cl)//重载减号
    {
        return this->area-cl.area;
    }
};
istream& operator>>(istream&in, Circle &cl)
{
    in>>cl.rad;
    cl.area=3.14*cl.rad*cl.rad;
    return in;
}
ostream& operator<<(ostream&out, Circle &cl)
{
    out<<"rad="<<cl.rad<<" area="<<cl.area;

    return out;
}
