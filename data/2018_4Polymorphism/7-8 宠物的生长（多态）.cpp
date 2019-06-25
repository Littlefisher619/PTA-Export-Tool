#include<iostream>
using namespace std;
class Pet{
protected:
    string name;
    int height;
    int weight;
    int current;
public:
    Pet(string a,int b,int c,int d):name(a),height(b),weight(c),current(d){};
    virtual void grow(int day) = 0;
    virtual void display() = 0;
};
class Cat : public Pet {
public:
    Cat(string a,int b,int c,int d):Pet(a,b,c,d){};
    void grow(int day){
        int x = day - current;
        height+=x;
        weight+=2*x;
    }
    void display(){
        cout<<name<<" "
            <<height<<" "
            <<weight<<endl;
    }
};
