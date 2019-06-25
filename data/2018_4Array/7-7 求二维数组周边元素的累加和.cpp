#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int diri[]={0,1,0,-1};
const int dirj[]={1,0,-1,0};
int main(){
    int a[4][5];
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    int step=0;
    int sum=a[0][0];
    int i=0,j=0,ni,nj;
    while(true){
        ni=i+diri[step],nj=j+dirj[step];
        if(ni<0 || ni>=4 || nj<0 || nj>=5){ 
            step++;
            ni=i+diri[step],nj=j+dirj[step];
        }
        if(ni==0 && nj==0) break;
        else{
            //cout<<ni<<" "<<nj<<endl;
            i=ni,j=nj;
            sum+=a[i][j];
        }
    }
