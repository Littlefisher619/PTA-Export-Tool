#include <iostream>
using namespace std;
class Client
{
    static int ClientNum;
    static char ServerName;
public:
 
    Client(){ClientNum++;};
    static void show(){cout<<"server name:"<<Client::ServerName<<endl<<"num of clients:"<<Client::ClientNum<<endl;}
    static void changeServerName(char x){ServerName=x;}
};
int Client::ClientNum=0;
char Client::ServerName='A';
