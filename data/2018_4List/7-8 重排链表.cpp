#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct node
{
    int x;
    int next;
    int adr;
}a[100005],tmp[100005],ans[100005];
int n; 
int main()
{
    auto input=[](int n){        
        for(int i=0;i<n;i++){
            int adr,x,next;
            scanf("%d%d%d",&adr,&x,&next);
            a[adr].x=x;
            a[adr].next=next;
            a[adr].adr=adr;
        }
    };
    auto output=[](int n){
        for(int i=0;i<n;i++)
        {
            if(i!=n-1) printf("%05d %d %05d\n",ans[i].adr,ans[i].x,ans[i].next);
            else printf("%05d %d %d\n",ans[i].adr,ans[i].x,-1);
