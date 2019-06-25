 
#include <iostream>
#include <string>
using namespace std;
 
 
class Clock {
public:
    Clock(int NewH = 0, int NewM = 0, int NewS = 0,int t=0);
    void ShowTime();
    friend Clock operator+(Clock& op);         //前置单目运算符重载
private:
    int Hour, Minute, Second,t;
};
 
Clock::Clock(int NewH, int NewM, int NewS,int Newt) {
    Hour = NewH;
    Minute = NewM;
    Second = NewS;
    t = Newt;
}
void Clock::ShowTime() {
    cout <<"time:"<< Hour << ":" << Minute << ":" << Second << endl;
}
 
Clock operator+(Clock& op) {
    //Clock T;
