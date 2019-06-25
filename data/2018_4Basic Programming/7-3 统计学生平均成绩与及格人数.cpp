#include <iostream>
 
#include <iomanip>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n,x,sum=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        if(x>=60) count++;
    }
    //1
    //cout.setf(ios::fixed);
    //cout << "average = " <<fixed<<setprecision(1)<<1.0*sum/n<<endl;
    //printf("count = %d", count);
    //2*/
    printf("average = %.1f\ncount = %d",n==0?0:1.0*sum/n,count);
    return 0;
}
