#include <iostream>
using namespace std;
class polygon
{
protected:
    int number; //边数，最多不超过100条边
private:
    int side_length[100]; //边长数组
public:
    polygon()
    { //构造函数根据需要重载
        int i = 0;
        number = 0;
        for (i = 0; i < 100; i++)
            side_length[i] = 0;
    }
    polygon(int n, int *s)
    {
        int i = 0;
        number = n;
        for (i = 0; i < n; i++)
            side_length[i] = s[i];
    }
    virtual int perimeter()
    { //计算多边形边长
        int i, sum = 0;
        for (i = 0; i<number; i++)
