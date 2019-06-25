#include <iostream>
#include <math.h>
using namespace std;
//本题考察多层继承，将数据设为保护类，并使用公有继承
//建立一维类
class Point_1D
{
protected:
    float x; //1D 点的x坐标
public:
    void set_1D() { cin >> x; }
    float distance(const Point_1D &p2);
};
//建立二维类
class Point_2D : public Point_1D
{
protected:
    float y; //2D平面上点的y坐标
public:
    void set_2D()
    {
        set_1D();
        cin >> y;
    } //调用基类set方法
    float distance(const Point_2D &p2);
};
//建立三维类
