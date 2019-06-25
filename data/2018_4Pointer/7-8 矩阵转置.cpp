#include<string>
#include <cstdio>
#include <iostream>
#include<map>
using namespace std;
void move(int *pointer){
    int *martix[3]={pointer,pointer+3,pointer+6};
    auto swap=[](int *a,int *b){int t=*a;*a=*b;*b=t;};
 
    swap(&martix[0][1],&martix[1][0]);
    swap(&martix[0][2],&martix[2][0]);
    swap(&martix[1][2],&martix[2][1]);
}
int main(){
    void move(int *pointer);
    int a[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    move(a[0]);
    for(int i=0;i<3;i++)
        cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
    
 
}
