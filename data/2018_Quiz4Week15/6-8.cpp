#include <iostream>
#include <iomanip>
using namespace std;
class TDVector{
private:
    double x;
    double y;
public:
    TDVector(){
        x = y = 0;
    }
    /**    你提交的代码将被嵌在这里（替换本行内容）  **/
    TDVector(double x,double y):x(x),y(y){}
    void setX(double X){
        x=X;
    }
    void setY(double Y){
        y=Y;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    TDVector operator+(const TDVector &a){
        return TDVector(x+a.x,y+a.y);
    }

};
int main(){
    TDVector a;
    double x, y;
    cin >> x >> y;
    TDVector b(x, y);
    cin >> x >> y;
    TDVector c;
    c.setX(x);
    c.setY(y);
    TDVector d;
    d = a + b + c;
    cout << fixed << setprecision(2) << d.getX() << ' ' << d.getY();
    while(getchar());
    return 0;
}