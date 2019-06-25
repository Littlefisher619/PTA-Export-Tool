class Box:public Rectangle{
    
    double height;
public:
    Box(double l, double w,double h):Rectangle(l,w),height(h){}
    double volume(){
        return area()*height;
    }
};
 
