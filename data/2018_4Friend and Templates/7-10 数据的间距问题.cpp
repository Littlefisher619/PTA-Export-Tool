#include<iostream>
#include<cmath>
using namespace std;
 
class Complex
{
private:
    double a, b;
public:
    Complex()
    {
        a = 0, b = 0;
    }
    Complex(double A, double B)
    {
        a = A, b = B;
    }
    void set(double A, double B)
    {
        a = A, b = B;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
    friend double operator - (Complex C1, Complex C2);
};
