class RTriangle
{
    double a,b;
public:
    RTriangle(double a,double b):a(a),b(b){};
    RTriangle RT(double a,double b){return RTriangle(a,b);}
    double getArea(){return a*b/2;}
    double getPerimeter(){return a+b+sqrt(a*a+b*b);}
    
};
