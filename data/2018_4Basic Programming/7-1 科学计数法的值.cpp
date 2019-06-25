#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int b,c;
    char buf[1200];
    cin>>buf;
    int numlen,dotpos=-1;
    for(int i=0;buf[i]!=0;i++) {
        if(buf[i]=='*')numlen=i;
        if(buf[i]=='.')dotpos=i;
    }
    //printf("%d %d",numlen,dotpos);
    bool intflag=(dotpos==-1);
    if(intflag==false && dotpos!=-1){
        intflag=true;
        for(int i=dotpos+1;buf[i]!='*';i++) {
            //cout<<buf[i]<<endl;
            if(buf[i]!='0') {intflag=false;break;}
        }
    }
 
    sscanf(buf+numlen+1,"%d%*c%d",&b,&c);
    buf[numlen]=0x00;
    //cout<<b<<" "<<c<<endl;
