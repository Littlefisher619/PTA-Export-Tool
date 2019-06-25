class Car  //定义类Car
{
    //成员函数
public:
    void disp_welcomemsg(){cout<<"Welcome to the car world!\n";}; //显示欢迎信息
    int get_wheels(){return this->m_nWheels;};       //返回汽车的车轮数量
    void set_wheels(int n){this->m_nWheels=n;};   //设置汽车的车轮数量
    //数据成员
private:
    int m_nWheels;    //显示汽车的车轮数量
};
