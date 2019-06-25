#include <iostream>
#include <iomanip>
#include<cstring>
#include<cmath>
using namespace std;
 
int main()
{
    int a;
    cin>>a;
    int sum=1;
    for(int i=1;i<a;i++){
        if(a%i==0) sum*=i;
    }
    cout<<sum;
}
