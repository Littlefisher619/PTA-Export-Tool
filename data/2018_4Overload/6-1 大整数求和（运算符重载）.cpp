/* 请在这里填写答案 */
#include<cstdio>
#include<cstring>
#define N 105
class BigInt{
    char data[N];
public:
    BigInt(){memset(data,0,sizeof(data));}
    BigInt operator+(const BigInt &b2){
        BigInt ans;
        
        for(int i=0;i<N-2;i++){
            char sum=this->data[i]+b2.data[i];
            ans.data[i]+=sum;
            if(ans.data[i]>=10){
                ans.data[i]-=10;
                ans.data[i+1]+=1;
            }
        }
        // for(int i=0;i<N-2;i++){
        //  printf("%d\n",ans.data[i] );
        // }
        return ans;
    }
    friend ostream & operator<<( ostream & os,const BigInt & b);
    friend istream & operator>>( istream & is,BigInt & b);
};
