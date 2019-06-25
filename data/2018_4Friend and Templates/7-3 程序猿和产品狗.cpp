#include<iostream>
#include<string>
using namespace std;
class CodeMonkey;
class ProductDog
{
    public:
        void add_todolist(CodeMonkey&,int);
        void reduce_todolist(CodeMonkey& , int);
};
 
class CodeMonkey
{
    private:
        string name;
        int todolist;
    public:
        void set(string na,int todo)
        {
            name=na;
            todolist=todo;
        }
        int sizeof_todolist()
        {
            cout<<todolist<<endl;
            return 0;
        }
