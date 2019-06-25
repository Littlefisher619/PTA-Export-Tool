#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main(){
    int n=0,x;
    int a[1001];
    while(true){
        cin>>x;
        if(x==-1) break;
        if(x&1)a[n++]=x;
    }
    for(int i=0;i<n;i++){cout<<a[i];if(i!=n-1)cout<<" ";}
}
