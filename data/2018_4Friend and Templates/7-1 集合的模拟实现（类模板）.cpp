#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
template<typename T>
class MySet
{
    T* data;
    int count;
public:
    MySet():count(0){data=new T[100];};
    ~MySet(){delete [] data;};
    int addSet(T elem){
        int res=-1;
        if(count==100) cout<<"Full Set."<<endl;
        else if(findElem(elem)!=-1) cout<<elem<<" is already exist!"<<endl;
        else res=count,data[count++]=elem;
        return res;
    }
 
    int deleSet(T elem){
        int del=findElem(elem,true);
        if(del!=-1){
            for(int i=del;i<count-1;i++) data[i]=data[i+1];
            count--;
        }
        return del;
