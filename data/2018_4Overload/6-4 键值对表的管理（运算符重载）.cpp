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
