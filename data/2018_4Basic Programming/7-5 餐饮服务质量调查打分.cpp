#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    int a[6];
    
    while(t--){
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            cin>>x;
            a[x]++;
        }
        for(int i=1;i<=5;i++){
            printf("%d:",i);
            for(int j=1;j<=a[i];j++) putchar('*');
            putchar('\n');
        }
    }   
}
