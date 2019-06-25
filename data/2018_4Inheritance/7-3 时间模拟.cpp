#include <iostream>
#include <iomanip>
using namespace std;
//建立Time基类
class Time
{
protected:
    int second;
    int minute;
    int hour;
    int total;
 
public:
    void operator++();
    void operator--();
    friend istream &operator>>(istream &, Time &);
};
istream &operator>>(istream &set, Time &x)
{
    set >> x.hour >> x.minute >> x.second;
    x.total = (x.hour * 60 + x.minute) * 60 + x.second;
    return set;
}
void Time::operator++()
{
    total++;
    second = total % 60;      //对60秒取余数
