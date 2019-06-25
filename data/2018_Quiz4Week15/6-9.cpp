#include <iostream>
using namespace std;
class Time {
private:
 int hours,minutes, seconds;
public:
 Time(int h=0, int m=0, int s=0);
 Time operator + (Time &);
 void DispTime();
};
/* 请在这里填写答案 */
Time::Time(int h, int m, int s):hours(h),minutes(m),seconds(s){};
Time Time::operator+ (Time &a){
    Time t(hours+a.hours,minutes+a.minutes,seconds+a.seconds);
    if(t.seconds>=60) ++t.minutes,t.seconds-=60;
    if(t.minutes>=60) ++t.hours,t.minutes-=60;
    return t;
}
void Time::DispTime(){
    cout<<hours<<"h:"<<minutes<<"m:"<<seconds<<"s";
}


int main() {
 Time tm1(8,75,50),tm2(0,6,16), tm3;
 tm3=tm1+tm2;
 tm3.DispTime();
 while(getchar());
 return 0;
}