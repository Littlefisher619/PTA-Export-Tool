#include<string>
#include <cstdio>
#include <iostream>
#include<map>
 
using namespace std;
int main(){
    int repeat,n,x;
    auto search=[](int* list,int n,int x)-> int{for(int i=0;i<n;i++)if(x==list[i]) return i;return -1;};
    cin>>repeat;
    int list[10];
    while(repeat--){
        cin>>n;
        for(int i=0;i<n;i++)cin>>list[i];
        cin>>x;
        int res=search(list,n,x);
        if(res==-1) printf("Not found\n");
        else printf("index = %d\n",res);
    }
}
