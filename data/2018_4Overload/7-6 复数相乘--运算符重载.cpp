#include<iostream>
using namespace std;
class complex {
    private:
        int real;
        int imag;
    public:
        void set(int r,int i) {
            real=r;
            imag=i;
        }
        friend complex operator *(complex &c1,complex &c2);
        void display();
 
};
 
complex operator *(complex &c1,complex &c2) {
    int re,im;
    complex c3;
    c3.real=c1.real*c2.real-(c1.imag*c2.imag);
    c3.imag=c1.real*c2.imag+c1.imag*c2.real;
    return c3;
}
void complex::display() {
    if(imag<0) {
        if(imag==-1) {
            if(real==0) {
