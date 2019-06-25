#include <iostream>
#include <cstdio>
using namespace std;
class student
{
private:
    int number;
    double score;

public:
    void set(int num, double scores)
    {
        number = num;
        score = scores;
    }

    friend double average(student *p, int count);
};

double average(student *p, int count)
{
    double sum;
    for (int i = 0; i < count; i++)
    {
        sum += p[i].score;
    }
    return sum / count;
}

int main()
{
    student *p = new student[100];

    int n, N = 0, i = 0;
    double score;
    while (cin >> n)
    {
        if (n == 0)
            break;
        else
        {

            cin >> score;
            p[i].set(n, score);
            i++;
            N++;
        }
    }
    cout << average(p, N) << endl;
    delete[] p;
    return 0;
}