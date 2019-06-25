#include <iostream>
#include <map>
using namespace std;
struct Stu
{
    char id[17];
    int a,b;
}stu[1001];
int main(){
    int n,m;
    cin>>n;
    map<int,Stu> a2Stu;
    for(int i=0;i<n;i++){
        cin>>stu[i].id>>stu[i].a>>stu[i].b;
        a2Stu[stu[i].a]=stu[i];
    }
    cin>>m;
    int x;
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<a2Stu[x].id<<" "<<a2Stu[x].b<<endl;
    }
}
