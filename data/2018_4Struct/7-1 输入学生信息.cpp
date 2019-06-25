#include <iostream>
using namespace std;
struct stu
{
    int id,score;
};
int main(){
    stu s[11];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>s[i].id>>s[i].score;
    for(int i=0;i<n;i++) cout<<s[i].id<<" "<<s[i].score<<endl;
}
