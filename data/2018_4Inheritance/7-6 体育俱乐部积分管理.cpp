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
