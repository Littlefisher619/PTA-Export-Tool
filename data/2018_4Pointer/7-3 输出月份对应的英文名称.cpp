#include<string>
#include <cstdio>
#include <iostream>
#include<map>
 
using namespace std;
int main(){
    char month[][13]={"","January","February","March","April","May","June","July","August","September","October"
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x<1 || x>12) cout<<"Wrong input!"<<endl;
        else cout<<month[x]<<endl;
 
    }
}
