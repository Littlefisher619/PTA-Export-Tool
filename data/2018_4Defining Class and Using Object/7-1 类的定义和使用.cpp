#include <iostream> 
using namespace std;
 
/* 请在这里填写答案 */
class Point
{
    int x,y;
public:
    Point(int x,int y):x(x),y(y){}
    void move(int dx,int dy){x+=dx;y+=dy;}
    void printp(){cout<<x<<" "<<y;}
};
 
int main() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Point p(x1,y1);
    p.move(x2,y2);
    p.printp();
}
