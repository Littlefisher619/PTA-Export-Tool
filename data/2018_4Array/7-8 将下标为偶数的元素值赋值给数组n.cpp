#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int x;
    for(int i=0;i<10;i++){
        cin>>x;
        if(!(i&1)){
            int pad=x==0?0:3-(int)log10(x);
            while(pad--) putchar(' ');
            cout<<x;
        }
    }
 
}
