#include<algorithm>
class Solution  //定义类Car
{
    //成员函数
public:
    int count_digits(string str){
        int ret=0;
        for(int i='0';i<='9';i++)
            ret+=count(str.begin(),str.end(),i);
        return ret;
    }
};
