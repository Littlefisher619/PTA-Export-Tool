class Clock
{
    int h,m,s;
public:
    Clock(int h=0,int m=0,int s=0):h(h),m(m),s(s){};
    void showTime(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    
};
