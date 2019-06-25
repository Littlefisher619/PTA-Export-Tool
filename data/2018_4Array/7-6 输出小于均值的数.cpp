#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int a[10],avg=0;
    for(int i=0;i<10;i++) cin>>a[i],avg+=a[i];
    avg/=10;
    for(int i=0;i<10;i++) if(a[i]<avg) cout<<a[i]<<" ";
}
