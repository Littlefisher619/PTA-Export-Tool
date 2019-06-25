#include<string>
#include <cstdio>
#include <iostream>
#include<map>
 
using namespace std;
void sort(int *a,int n){
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if(a[i]>a[j]) t=a[i],a[i]=a[j],a[j]=t;
    
}
 
int main(){
    int repeat,n,a[10];
 
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,n);
    for(int i = 0; i < n; i++ ){
        printf("%d ", a[i]);
     
    }
}
