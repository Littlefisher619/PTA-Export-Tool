 
#include<iostream>
using namespace std; 
class Horse{
    public:
      Horse(){
          cout<<"Horse 申请了空间..."<<endl;
      }
      virtual void Fly(){
          cout<<"Just a horse."<<endl;
      }
      virtual ~Horse(){
          cout<<"Horse 释放了空间..."<<endl;
      }
};
class Pegasus:public Horse{
    public:
      Pegasus(){
          cout<<"Pegasus 申请了空间..."<<endl;
      }
      void Fly(){
          cout<<"I can fly!"<<endl;
      }
      ~Pegasus(){
          cout<<"Pegasus 释放了空间..."<<endl;
      }
};
