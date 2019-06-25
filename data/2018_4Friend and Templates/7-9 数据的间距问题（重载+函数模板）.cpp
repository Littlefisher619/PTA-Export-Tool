#include<iostream>
#include<cmath>
using namespace std;
 
class Time
{
    private:
        int hh;
        int mm;
        int ss;
    public:
        Time()
        {
            hh = 0;
            mm = 0;
            ss = 0;
        }
        void set(int h,int m,int s) 
        {
            hh=h;
            mm=m;
            ss=s;
        }
        friend int operator-(Time ,Time);
        friend istream& operator>>(istream &,Time &);
};
istream & operator>>(istream & set,Time &t)
