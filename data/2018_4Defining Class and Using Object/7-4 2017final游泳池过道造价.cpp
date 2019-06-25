#include<iostream>
#include<cstdio>
#include <iomanip>
using namespace std;
 
const double PI=3.14159;
class Circle
{
    double radius;
public:
    Circle(double r):radius(r){};
    double getArea(){return PI*radius*radius;}
};
class Rectangle
{
    double length,width;
public:
    Rectangle(double l,double w):length(l),width(w){};
    double getArea(){return length*width;}
    
};
int main(){
    double a,b,c;
    cin>>a>>b>>c;
        
    Circle circle(a);
    Rectangle r(b,c);
