#include<iostream>
using namespace std;
int myMax(int a,int b){
    return a>b?a:b;
}
int myMax(int a,int b,int c){
    return myMax(myMax(a,b),c);
}
double myMax(double a,double b){
    return a>b?a:b;
}
 
