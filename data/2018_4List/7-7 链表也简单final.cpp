#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
struct Node
{
    string name;
    double score;
}node[1000];
int main(){
    string x;
    int n=0;
    double avg=0;
    while(true){
        cin>>x;
        if(x=="-1")break;
        node[n].name=x;
        cin>>node[n].score;
        avg+=node[n].score;
        n++;
    }
    avg/=n;
    for(int i=0;i<n;i++)if(node[i].score>=avg)cout<<node[i].name<<endl;
}
