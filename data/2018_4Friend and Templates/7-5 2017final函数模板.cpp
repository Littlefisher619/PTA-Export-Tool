#include<iostream>
#include<math.h>
using namespace std;
class point
{
      float x;
      float y;
      float z;
      public:
             double operator - (point&);
             friend istream& operator >>(istream&,point&);
};
double point::operator - (point& p)
{
       return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)+(z-p.z)*(z-p.z));
}
istream& operator >>(istream& in,point& p)
{
        in>>p.x>>p.y>>p.z;
        return in;
}
template<class T>
double dist(T a,T b)
{
       return fabs(a-b);
}
int main()
