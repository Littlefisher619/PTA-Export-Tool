#include<iostream>
using namespace std;
class Animal{
    int age;
    public:
    Animal(int age):age(age){}
    int getAge(){
        return age;
    }
};
class Dog:public Animal{
    string color;
    public:
    Dog(int age,string color):Animal(age),color(color){}
    void showInfor(){
        cout<<"age:"<<getAge()<<endl<<"color:"<<color<<endl;
    }
};
int main(){
	Animal ani(5);
	cout<<"age of ani:"<<ani.getAge()<<endl;
	Dog dog(5,"black");
	cout<<"infor of dog:"<<endl;
	dog.showInfor();
}
