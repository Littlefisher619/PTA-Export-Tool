#include <iostream>
using namespace std;
class polygon
{
protected:
    int number;
 
private:
    int side_length[100];
 
public:
    polygon(){};
    polygon(int num)
    {
        number = num;
    }
    void set(int len[])
    {
        for (int i = 0; i < number; i++)
        {
            side_length[i] = len[i];
        }
    }
    int perimeter()
    {
        int ans = 0;
        for (int i = 0; i < number; i++)
