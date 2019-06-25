#include<string>
#include <cstdio>
#include <iostream>
#include<map>
 
using namespace std;
void delchar(char* str,char c){
    int j=0;
    for(int i=0;str[i]!=0;i++){
        if(str[i]!=c){ str[j++]=str[i]; };
    }
    str[j]=0x00;
}
int main(){
    int repeat;
    cin>>repeat;
    char str[101],c;
    while(repeat--){
        getchar();
        cin.getline(str,100);
        cin>>c;
        delchar(str,c);
        cout<<"result: "<<str<<endl;
    }
 
}
