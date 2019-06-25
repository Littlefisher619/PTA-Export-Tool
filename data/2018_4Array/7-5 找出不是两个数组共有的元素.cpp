#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool find(int x,int* arr,int len){
    if(NULL==arr || len==0) return false;
    for(int i=0;i<len;i++){
        if(arr[i]==x) return true;
    }
    return false;
}
int main(){
    int x;
    int len1=0,len2=0,n1,n2;
    int arr1[21],arr2[21];
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>x;
        if(!find(x,arr1,len1)) arr1[len1++]=x;
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>x;
        if(!find(x,arr2,len2)) arr2[len2++]=x;
