class Point
{
    static int count;
    int x,y;
public:
    Point(int x=0,int y=0):x(x),y(y){++count;}
    Point(const Point &p):x(p.x),y(p.y){++count;}
    int getX(){return x;}
    int getY(){return y;}
    static void showCount(){cout<<count<<endl;}
    
};
int Point::count=0;
