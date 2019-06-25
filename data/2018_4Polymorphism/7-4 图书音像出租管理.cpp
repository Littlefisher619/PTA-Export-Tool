#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
class pc
{
    protected:
        string title;//名称
        float price;//原价
        int day;//租期
    public:
        virtual void display()=0;//打印价格清单
};
class book:public pc
{
    private:
        float num;
    public:
        book(){ }
        book(string name,float pr,int dd,float n)
        {
            title=name;
            price=pr;
            day=dd;
            num=n;
        }
