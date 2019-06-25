#include <iostream>
using namespace std;
template <class T>
T m(T, int);

int main()
{
    int ty, task;
    cin>>ty;
    while(ty!=0)	{
        cin>>task;
        switch(ty){
            case 1:cout<<m(0,task)<<endl;break;
            case 2:cout<<m(0L,task)<<endl;break;
            case 3:cout<<m('0',task)<<endl;break;
            case 4:cout<<m(0.1, task)<<endl;
        }
       cin>>ty;
    }
    while(getchar());
    return 0;
}

template<class T>
T m(T t, int task){
    T t1,t2;
    cin>>t1>>t2;
    if(task==1) return t1>t2?t1:t2;
    else return t1<t2?t1:t2;
}