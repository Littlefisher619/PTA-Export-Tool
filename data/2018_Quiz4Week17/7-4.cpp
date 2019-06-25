#include <iostream>
#include <string>
using namespace std;
class Vehicle // 父类、基类  Vehicle
{
protected:            // 安全属性
    string NO;        // 编号
public:               // 公共属性
    Vehicle(string n) // 获取编号
    {
        NO = n;
    }
    virtual int money() = 0; //计算应收费用
};

class Car : Vehicle // 子类Car，继承父类Verhicle
{
public:
    int guest, weight;
    Car(string no1, int guest1, int weight1) : Vehicle(no1)
    {
        weight = weight1;
        guest = guest1;
    }
    int money()
    {
        return guest * 8 + weight * 2; //  载客数8+重量2
    }
};

class Truck : Vehicle // 子类Truck，继承父类Verhicle
{
public:
    int weight;
    Truck(string no1, int weight1) : Vehicle(no1)
    {
        weight = weight1;
    }
    int money()
    {
        return weight * 5; // 重量*5
    }
};

class Bus : Vehicle // 子类Bus，继承父类Verhicle
{
public:
    int guest;
    Bus(string no1, int guest1) : Vehicle(no1)
    {
        guest = guest1;
    }
    int money()
    {
        return guest * 3; // 载客数*3
    }
};

int main()
{
    Car car("", 0, 0); // 实例化对象类，初始化Car的 载客数量，重量
    Truck truck("", 0);
    Bus bus("", 0);

    int i, repeat, type, weight, guest;
    string no;

    while (cin >> type)

    {
        if (type == 0)
            break;
        else
            switch (type)
            {
            case 0:
                break; // 输入0退出的功能没有成功

            case 1:
                cin >> no >> guest >> weight; // 获取 Car的 载客数量，重量
                car = Car(no, guest, weight);
                cout << no << ' ' << car.money() << endl; // 输出收费
                break;
            case 2:
                cin >> no >> weight; // 获取Truck 的重量
                truck = Truck(no, weight);
                cout << no << ' ' << truck.money() << endl;
                break;
            case 3:
                cin >> no >> guest; // 获取Bus的载客数
                bus = Bus(no, guest);
                cout << no << ' ' << bus.money() << endl;
                break;
            }
    }
    return 0;
}