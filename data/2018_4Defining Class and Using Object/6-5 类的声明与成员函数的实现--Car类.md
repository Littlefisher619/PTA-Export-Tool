# 6-5 类的声明与成员函数的实现--Car类
本题要求根据给定的Car类的声明，实现其成员函数。

### 类和函数接口定义：

    
    
    class Car  //定义类Car
    {
        //成员函数
    public:
        void disp_welcomemsg(); //显示欢迎信息
        int get_wheels();       //返回汽车的车轮数量
        void set_wheels(int);   //设置汽车的车轮数量
        //数据成员
    private:
        int m_nWheels;    //汽车的车轮数量
    };
    

其中，成员函数`void disp_welcomemsg()`显示一条欢迎信息“`Welcome to the car world!`”。 成员函数`int
get_wheels()`返回Car类的私有数据成员`m_nWheels`。 成员函数`int
set_wheels(int)`用指定的形参初始化数据成员`m_nWheels`。

### 裁判测试程序样例：

    
    
    #include <iostream>
    using namespace std;
    
    class Car  //定义类Car
    {
        //成员函数
    public:
        void disp_welcomemsg(); //显示欢迎信息
        int get_wheels();       //返回汽车的车轮数量
        void set_wheels(int);   //设置汽车的车轮数量
        //数据成员
    private:
        int m_nWheels;    //显示汽车的车轮数量
    };
    
    /* 请在这里填写答案 */
    
    int main()
    {
        int n;
        cin >> n;
        Car mycar;     //定义类对象mycar
        mycar.disp_welcomemsg();  //访问成员函数，显示欢迎信息
        mycar.set_wheels(n);      //访问成员函数，设置车轮数量
        //访问成员函数，显示车轮数量
        cout << "wheels = " << mycar.get_wheels() << endl;
        return 0;
    }
    
    

### 输入样例：

    
    
    4
    

### 输出样例：

    
    
    Welcome to the car world!
    wheels = 4
    

