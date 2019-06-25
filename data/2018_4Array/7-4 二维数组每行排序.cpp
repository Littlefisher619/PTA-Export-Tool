#include<iostream>
#include<cstring>
#include<cmath>
#include<stack>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a[4][5];
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    for(int i=0;i<4;i++){
        sort(a[i],a[i]+5);
        for(int j=0;j<5;j++){
            
            if(j!=5){
                int pad=a[i][j]==0?0:3-(int)log10(a[i][j]);
                while(pad--) putchar(' ');
            }
            cout<<a[i][j];
        }
        if(i!=4)putchar('\n');
    }
 
}
