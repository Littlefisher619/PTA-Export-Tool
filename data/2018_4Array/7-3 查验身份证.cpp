#include<iostream>
#include<cstring>
#include<cmath>
#include<stack>
#include<cstdlib>
using namespace std;
const int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const char M[]={'1','0','X','9','8','7','6','5','4','3','2'};
bool check(char *buf){
    for(int j=0;j<17;j++){
        if(buf[j]<'0' || buf[j]>'9'){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    char buf[20];
    bool pass=true;
    for(int i=1;i<=n;i++){
        cin>>buf;
        if(!check(buf)){
            pass=false;
            cout<<buf<<endl;
            continue;
