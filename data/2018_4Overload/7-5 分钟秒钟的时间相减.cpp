#include <iostream>
#include <string>
using namespace std;
 
class Time
{
    int m,s;
public:
    Time(int m=0,int s=0):m(m),s(s){};
    //Time(int m=0):h(m/60),m(m%60){};
    operator int(){
        return m*60+s;
    }
    friend istream& operator>>(istream &is,Time &t);
};
istream& operator>>(istream &is,Time &t)
{
        is>>t.m>>t.s;
        return is;
    
}
int main(){
    Time t1,t2;
    while(cin>>t1>>t2){
        if(t1==0 && t2==0) continue;
        else cout<<t2-t1<<endl;
    }
