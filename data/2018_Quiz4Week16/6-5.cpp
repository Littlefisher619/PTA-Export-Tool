#include <iostream>
#include <string>
using namespace std;

class Account
{
	string userName;
public:
	Account() {};
	Account(string name);
	void  PrintUserName();
};

class CreditAccount : public Account
{
public:
	CreditAccount(string name, int credit);
	void PrintInfo();
private:
	int credit;
};
Account::Account(string name){
    userName=name;
}
void Account::PrintUserName(){
    cout<<userName<<endl;
}
CreditAccount::CreditAccount(string name, int credit):Account(name),credit(credit){}
void CreditAccount::PrintInfo(){
    PrintUserName();
    cout<<credit<<endl;
}
 /* 请在这里填写答案 */
//请实现Account构造函数Account(char *name)
//请实现Account的PrintUserName()函数
//请实现CreditAccount类的构造函数CreditAccount(char* name, long number)
//请实现CreditAccount类的PrintInfo()函数

int main()
{
	CreditAccount a("I Love CPP", 10000);
	a.PrintInfo();
	return 0;
}