#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[50],n;
    cin>>n;
    int maxi=0,mini=0;
    a[0]=0;
    for(int i=0;i<n;i++) cin>>a[i],maxi=a[maxi]>a[i]?maxi:i,mini=a[mini]>a[i]?i:mini;
 
    cout<<"max = "<<a[maxi]<<endl<<"min = "<<a[mini];
}
