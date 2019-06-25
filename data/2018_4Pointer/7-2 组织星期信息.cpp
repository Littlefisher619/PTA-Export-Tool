#include<string>
#include <cstdio>
#include <iostream>
#include<map>
 
using namespace std;
int main(){
    map<string,int> m={
    {"Sunday",1}, {"Monday",2}, {"Tuesday",3},{"Wednesday",4},{"Thursday",5},{"Friday",6},{"Saturday",7}
    };
 
    int n;
    cin>>n;
    while(n--){
        string x;
        cin>>x;
        if(m.count(x)==0) cout<<-1<<endl;
        else cout<<m[x]<<endl;
    }
}
