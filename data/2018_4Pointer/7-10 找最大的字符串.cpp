#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char a[50][5];
    char* maxstr=a[0];
    for(int i=0;i<5;i++) cin>>a[i],maxstr=strcmp(a[i],maxstr)>0?a[i]:maxstr;
    cout<<"Max is: "<<maxstr;
}
