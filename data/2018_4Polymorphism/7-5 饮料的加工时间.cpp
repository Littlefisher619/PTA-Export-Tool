#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Drink
{
    protected:
        int NO; //编号
        int amount; //数量
    public:
        virtual void display()=0;//输出提供时间
};
class Tea:public Drink
{
    private:
        int op;
    public:
        Tea(){ }
        Tea(int num,int shu,int o)
        {
            NO=num;
            amount=shu;
            op=o;
        }
        virtual void display();
};
class Coffee:public Drink
