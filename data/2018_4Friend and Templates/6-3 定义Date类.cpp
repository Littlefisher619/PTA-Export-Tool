class Date
{
    int y,m,d;
public:
    Date(int d=1,int m=1,int y=2019):y(y),m(m),d(d){};
    void display(){
        cout<<d<<"/"<<m<<"/"<<y<<endl;
    }
};
