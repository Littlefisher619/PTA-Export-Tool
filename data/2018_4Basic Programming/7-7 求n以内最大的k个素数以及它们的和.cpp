#include <iostream>
#include <iomanip>
#include<cstring>
#include<cstdio>
using namespace std;
 
bool isprime(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++)
        if(x%i==0) return false;
    return true;
}
 
 
 
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    int i=a;
    for(int j=1;j<=b;j++){
        for(;!isprime(i) && i>0;i--);
        sum+=i;
        if(i!=0){
            if(j!=1) putchar('+');
            cout<<i--;
        }
