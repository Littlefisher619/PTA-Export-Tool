
#include<iostream>
#include<iomanip>
using namespace std;
class Periodical
{
  protected:
    string title; //名称
    float price;
    int amount;
  public:
    Periodical(string t,float p,int a):title(t),price(p),amount(a){
    }
    virtual void display()=0;//打印收费
};
class Magazine:public Periodical
{
  public:
    Magazine(string t,float p,int a):Periodical(t,p,a){
    }
    void display();
};
void Magazine::display()
{
  cout<<title<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<price*amount<<endl;
}
class Newspaper:public Periodical
{
  int week;
  public:
    Newspaper(string t,float p,int a,int w):Periodical(t,p,a){week=w;
    }
    void display();
};
void Newspaper::display()
{
  cout<<title<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<price*amount*week<<endl;
 } 
int main()
{
  Periodical *pp[10];
  int type,amount,week,i=0;
  string name;
  float price;
  cin>>type;
  while(type!=0)
  {
    cin>>name>>price>>amount;
    if(type==1)
    {
      pp[i]=new Magazine(name,price,amount);
      pp[i++]->display();
    }
    else
    {
      cin>>week;
      pp[i]=new Newspaper(name,price,amount,week);
      pp[i++]->display();
    }
    cin>>type;
  }
  return 0;
}
