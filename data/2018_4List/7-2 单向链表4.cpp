#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    int a[100];
    int n=0;
    int x;
    while(true){cin>>x;if(x!=-1)a[n++]=x;else break;}
    for(int i=n-1;i>=0;i--) {cout<<a[i];if(i!=0)cout<<" ";}
}
