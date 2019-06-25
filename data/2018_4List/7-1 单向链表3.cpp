#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    
    int r,n,a[11];
    cin>>r;
    while(r--){
        cin>>n;
        n++;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        printf("size=%d:",n);
        for(int i=0;i<n;i++){cout<<a[i];if(i!=n-1)cout<<" ";}
        if(r!=0)cout<<endl;
    }
}
