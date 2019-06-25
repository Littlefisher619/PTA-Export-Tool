#include<string>
#include<iostream>
#include<map>
using namespace std;

class Ball
{
protected:
    string opponent;//对手
public:
    void display();//显示比赛成绩
};

class Basketball:public Ball{

};
class Football:public Ball{

};
class Volleyball:public Ball{

};
int main(){
int i;
string s;
int x,y,score;
map<string,int> m;

while(true){
    cin>>i;
    cin>>s;
    if(i==0) break;
    scanf("%d:%d",&x,&y);
    switch (i)
    {
    case 1:
        score= (x==y)?0:((x>y)?2:1);
        break;
    case 2:
        score= (x==y)?1:((x>y)?3:0);
        break;
    case 3:
        if(x==3){
            if(y==0 || y==1 )score=3;
            if(y==2) score=2;
        }else if(x==2 && y==3) score=1;
        else score=0;
    }
    cout<<s<<" "<<score<<endl;
}
}