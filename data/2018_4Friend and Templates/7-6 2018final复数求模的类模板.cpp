#include<iostream>
#include<cmath>
using namespace std;
template <typename T>
class Complex
{
private:
    T a, b;
public:
    Complex()
    {
        a = 0, b = 0;
    }
    Complex(T A, T B)
    {
        a = A, b = B;
    }
    void set(T A, T B)
    {
        a = A, b = B;
    }
    void get(){
        cin>>a>>b;
    }
    void m(){
        cout<<sqrt(a*a+b*b);
    }
