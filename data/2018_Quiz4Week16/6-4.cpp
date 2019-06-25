#include <iostream>
#include <string>
using namespace std;

/* 请在这里填写答案 */
class Animal{
    private:
    int m_nWeightBase;
    protected:
    int m_nAgeBase;
    public:
    void set_weight(int w){m_nWeightBase=w;}
    int get_weight(){return m_nWeightBase;}
    void set_age(int a){m_nAgeBase=a;}

};
class Cat:public Animal{
    private:
    string m_strName;
    public:
    Cat(string name):m_strName(name){}
    void set_print_age(){
        set_age(5);
        cout<<m_strName<<", age = "<<m_nAgeBase<<endl;
    }
    void set_print_weight(){
        set_weight(6);
        cout<<m_strName<<", weight = "<<get_weight()<<endl;
    }
};
int main()
{
    Cat cat("Persian");     //定义派生类对象cat
    cat.set_print_age();
    cat.set_print_weight(); //派生类对象调用自己的公有函数
    return 0;
}

