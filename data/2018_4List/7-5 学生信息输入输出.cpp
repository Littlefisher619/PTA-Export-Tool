#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
struct Node
{
    int id;
    string name;
    int score;
}node[1000];
int main(){
    int x;
    int n=0;
    while(true){
        cin>>x;
        if(x==0)break;
        node[n].id=x;
        cin>>node[n].name;
        cin>>node[n].score;
        n++;
    }
    int score;
    cin>>score;
    for(int i=0;i<n;i++)cout<<node[i].id<<" "<<node[i].name<<" "<<node[i].score<<endl;
}
