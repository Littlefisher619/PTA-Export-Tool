#include <iostream>
#include <string>
using namespace std;
 
class Time
{
    int h,m;
public:
    Time(int h=0,int m=0):h(h),m(m){};
    //Time(int m=0):h(m/60),m(m%60){};
    operator int(){
        return h*60+m;
    }
    friend istream& operator>>(istream &is,Time &t);
};
istream& operator>>(istream &is,Time &t)
{
        is>>t.h>>t.m;
        return is;
    
}
int main(){
    Time t1,t2;
    while(cin>>t1>>t2){
        if(t1==0 && t2==0) continue;
        else cout<<t2-t1<<endl;
    }
