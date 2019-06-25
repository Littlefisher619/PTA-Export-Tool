#include<iostream>
#include<cstring>
#include<cmath>
#include<stack>
#include<cstdlib>
using namespace std;
int main(){
    char str[500005];
    cin.getline(str, 500005); 
 
    stack<char*> s;
    const char* split = " ";
    char* p;
    p = strtok (str,split);
    
    while(p!=NULL) {
        s.push(p);
        p = strtok(NULL,split);
        
    } 
    if(!s.empty()){
        printf("%s",s.top() );
        s.pop();
    }
    while(!s.empty()){
        printf(" %s",s.top() );
        s.pop();
