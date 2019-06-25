#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct Stu
{
    string name;
    int height,weight;
    Stu(int h=-1,int w=-1):height(h),weight(w){}
}maxi[1000000];
int main(){
    int n;
    cin>>n;
    int room,h,w;
    string name;
    for(int i=1;i<=n;i++){
        cin>>room>>name>>h>>w;
        if(h>maxi[room].height){
            maxi[room].name=name;
            maxi[room].height=h;
            maxi[room].weight=w;
        }
    }
    for(int i=0;i<=999999;i++){
        if(maxi[i].height==-1) continue;
        printf("%06d",i);
        cout<<" "<<maxi[i].name<<" "<<maxi[i].height<<" "<<maxi[i].weight<<endl;
