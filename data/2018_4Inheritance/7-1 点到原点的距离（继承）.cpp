#include<iostream>
#include<cmath>
using namespace std;
 
class Point_1D
{   
protected:
    float x;//1D 点的x坐标
public:
    Point_1D(float p = 0.0):x(p){};
    float distance(){return fabs(x);}//计算当前点到原点的距离
};
class Point_2D:public Point_1D
{   
protected:
    float y;
public:
    Point_2D(float x,float y):Point_1D(x),y(y){};
    float distance(){return sqrt(x*x+y*y);};//计算当前点到原点的距离
};
class Point_3D:public Point_2D
{   
protected:
    float z;
public:
    Point_3D(float x,float y,float z):Point_2D(x,y),z(z){};
    float distance(){return sqrt(x*x+y*y+z*z);};//计算当前点到原点的距离
