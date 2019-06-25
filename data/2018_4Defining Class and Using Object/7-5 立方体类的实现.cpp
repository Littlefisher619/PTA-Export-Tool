#include<iostream>
#include<cstdio>
#include <iomanip>
using namespace std;
class Box
{
    float a;
    float vol,area;
public:
    Box(){};
    void seta(float a){this->a=a;}
    void getvolume(){vol=a*a*a;}
    void getarea(){area=a*a*6;}
    void disp(){cout<<vol<<" "<<area;}
    
};
int  main( ){
    float ab;
    cin>>ab;
    Box  obj;
    obj.seta( ab );
    obj.getvolume( );
    obj.getarea( );
    obj.disp( );
    return 0;
}
