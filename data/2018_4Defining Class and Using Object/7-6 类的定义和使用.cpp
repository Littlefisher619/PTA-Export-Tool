#include <stdio.h>
#include<iostream>
using namespace std;
class Date
{
    int year,month,day;
public:
    Date(int y,int m,int d):year(y),month(m),day(d){};
    bool isLeap(){return year%4==0 && year%100!=0 || year%400==0;}
 
};
 
int main(){
    int y,m,d;
    cin>>y>>m>>d;
    Date date(y,m,d);
    cout<<(date.isLeap()?"yes":"no");
    return 0;
}
