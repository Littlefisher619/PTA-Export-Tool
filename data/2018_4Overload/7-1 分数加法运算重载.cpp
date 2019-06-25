#include<iostream>
using namespace std;
class FS
{
    private:
        int fz;
        int fm;
    public:
        FS(){
            fm=1;
            fz=0;
        }
        void set(int m,int z){
            fm=m;
            fz=z;
        }
        void del(){
            fm=1;
            fz=0;
        }
        FS operator + (const FS &f){
            FS f1;
            f1=f;
            f1.fz=fz*f1.fm+f1.fz*fm;
            f1.fm=fm*f1.fm;
            return f1;
        }
