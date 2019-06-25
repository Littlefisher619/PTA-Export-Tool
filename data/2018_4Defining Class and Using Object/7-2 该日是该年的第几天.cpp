#include <stdio.h>
#include<iostream>
using namespace std;
class Date
{
    int y,m,d;
public:
    Date(int y,int m,int d):y(y),m(m),d(d){};
    void print(){
        cout<<y<<" "<<m<<" "<<d;
    }
    bool isleapyear(){return (y%4==0 && y%100!=0 || y%400==0);}
    int dayofYear(){
        int k=0,b=0;
        int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
        b=isleapyear();
        for(k=0;k<m;k++) d=d+a[b][k];
        return d;
    }
};
 
int main(){
    int y,m,d;
    while(true){
        cin>>y>>m>>d;
        if(y==m && m==d && d==0) break;
        Date date(y,m,d);
