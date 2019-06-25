#include<iostream>
#include<cmath>
using namespace std;
//广义点 
class Point
{
protected:
    int dimension;//点的维数，最多不超过100维
private:
    float point_length[100];//点数组
public:
    Point ( ){};//构造函数根据需要重载
    Point (int a , float b[]) : dimension(a){
        //这里实现传指针赋值给数组
        for(int i=0;i<a;i++)
        {
            point_length[i] = b[i];
        }
    };
    virtual float distance( ){
        float ans=0;
        for(int i=0;i<dimension;i++)
        {
            ans += (point_length[i] * point_length[i]);
        }
        return sqrt(ans);
    };
