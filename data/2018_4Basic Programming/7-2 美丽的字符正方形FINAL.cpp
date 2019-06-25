#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
int diri[]={0,1,0,-1}
   ,dirj[]={1,0,-1,0};
int main()
{
    char buf[55];
    char outmap[55][55];
    memset(outmap,0,sizeof(outmap));
    scanf("%s",buf);
    int len=strlen(buf);
    int a=(len-4)/4+2;//,pad=a-2,midlines=(len-a*2)/2;
    int cur=0;
    if(len<4){
        putchar(buf[0]);
        goto rtn;
    }
    
 
    
    for(int i=0,j=0,step=0;;){
        //cout<<i<<" "<<j<<endl;
        outmap[i][j]=buf[cur++];
        int ni=i+diri[step],nj=j+dirj[step];
        if(ni>=a || nj>=a || ni<0 || nj<0){
