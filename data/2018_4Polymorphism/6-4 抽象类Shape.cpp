class Rectangle:public Shape{
    protected:
    double w,h;
    public:
    Rectangle(double w,double h):w(w),h(h){};
    double getArea(){
        return w*h;
    }
    double getPerim(){
        return (w+h)*2;
    }
};
class Circle:public Shape{
    protected:
    double r;
    public:
    Circle(double r):r(r){};
    double getArea(){
        return r*r*PI;
    }
    double getPerim(){
        return 2*PI*r;
    }
};
