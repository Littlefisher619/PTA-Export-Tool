#include <iostream>
#include <iomanip>
#include<cstring>
#include<cstdio>
using namespace std;
int sumi(int x){
    int sum=0;
    for(;x>0;x/=10)
        sum+=x%10;
    return sum;
}
int main()
{
    int a,last;
    cin>>a;
    last=a;
    for(int i=1;;i++){
        a=sumi(a)*3+1;
        printf("%d:%d\n",i, a);
        if(last==a){
            break;
        }else last=a;
    }
}
