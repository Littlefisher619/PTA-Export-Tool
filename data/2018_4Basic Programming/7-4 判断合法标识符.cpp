#include <regex>
#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    string s;
 
    regex r("^[a-zA-Z_][a-zA-Z_0-9]*$");
    while(n--){
        getline(cin,s);
        puts(regex_match(s,r)?"Yes":"No");
    }
}
