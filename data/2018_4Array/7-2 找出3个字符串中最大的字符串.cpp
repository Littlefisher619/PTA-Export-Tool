#include<iostream>
#include<cstring>
#include<cmath>
#include<stack>
#include<cstdlib>
using namespace std;
int main(){
    char strarr[3][20];
    cin>>strarr[0]>>strarr[1]>>strarr[2];
    char *strmax=NULL;
    for(int i=0;i<3;i++){
        if(NULL==strmax) strmax=strarr[i];
        strmax=strcmp(strmax,strarr[i])>0?strmax:strarr[i];
    }
    cout<<"The largest string is:\n"<<strmax;
}
