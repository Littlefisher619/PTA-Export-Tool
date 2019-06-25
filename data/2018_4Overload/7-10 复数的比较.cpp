#include <iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    Complex(int a=0,int b=0):a(a),b(b){};
    operator int(){return a*a+b*b;}
    friend istream& operator>>(istream &is,Complex &c){
        is>>c.a>>c.b;
        return is;
    }
};
int main(){
    Complex c1,c2;
    while(cin>>c1>>c2){
        if(c1==0 && c2==0) continue;
        else cout<<(c1>c2?"true":"false")<<endl;
    }
}
