#include <iostream>
using namespace std;
 
class Date
{
 
protected:
    int year, month, day;
public:
    Date(int y,int m,int d):year(y),month(m),day(d){};
};
class Time
{
protected:
    int hour, minute, second;
public:
    Time(int h,int mm,int s):hour(h),minute(mm),second(s){};
};
class Schedule : public Date, public Time
{
protected:
    int ID;
 
public:
    void show(){
        printf("The urgent schedule is No.%d: %d/%d/%d %d:%d:%d",ID,year,month,day,hour,minute,second);
 
