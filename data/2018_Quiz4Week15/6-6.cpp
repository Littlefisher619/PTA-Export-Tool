#include <iostream>
using namespace std;

/* 请在这里填写答案 */
#include<map>
template<typename T>
class Table{
    map<int,T> m;
    int size;
    int count;
public:
    Table(int sz):size(sz),count(0){};
    T& operator[](int i){
        static T none;
        if(m.find(i) != m.end()) return m[i];
        if(count>=size) {
            return none;
        }else{ 
            count++;
            return m[i];
        }
    }
    void min(){
        bool first=true;
        int key=0;

        for(auto &it : m){
            if(first) key=it.first,first=!first;
            else key=it.second>=m[key]?key:it.first;
        }
        cout<<key<<" "<<m[key]<<endl;
    }
};

int main() {
    const int SIZE=2;
    int key, ty;
    string temp;
    Table<double> dT(SIZE);
    Table<int> iT(SIZE);
    Table<char> cT(SIZE);
    iT[2016]=19;
    iT[999]=27;
    while(cin>>ty){
        switch(ty) {
            case 1: cin>>key; cin>>dT[key]; dT.min(); break;
            case 2: cin>>key; cin>>iT[key]; iT.min(); break;
            case 3: cin>>key; cin>>cT[key]; cT.min(); break;
            default:getline(cin,temp);
        }
    }
    return 0;
}
