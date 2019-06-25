#include <stdio.h>
#include<iostream>
#include<cmath>
#include <time.h>
using namespace std;
class Date
{
    
    int year,month,day;
    const static int day_tab[2][12];
    public:
    Date(int y,int m,int d):year(y),month(m),day(d){};
    
    friend int count_day(Date &d,int flag);
 
    friend int subs(Date d1,Date d2);
    friend int leap(int year);
    friend int check(Date &d);
 
};
const int Date::day_tab[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
int leap(int year)
{
    return (year%4==0 && year%100!=0 || year%400==0);
}
int check(Date &d){
    return (d.month<=12 && d.month>0 && d.day>0 && d.day<=Date::day_tab[leap(d.year)][d.month-1]);
