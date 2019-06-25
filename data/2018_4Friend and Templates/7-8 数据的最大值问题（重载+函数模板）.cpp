#include<iostream>
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
        friend bool operator >(Time &t1,Time &t2);
        friend ostream & operator <<(ostream &,Time &);
} ;
bool operator >(Time &t1,Time &t2)
{
    int re1=t1.hh*3600+t1.mm*60+t1.ss;
