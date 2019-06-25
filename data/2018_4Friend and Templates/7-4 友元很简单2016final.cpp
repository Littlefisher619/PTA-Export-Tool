#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class student
{
    int id,score;
public:
    student(){};
    student(int id,int score):id(id),score(score){};
    ~student(){};
    friend student* average(student *p,int count);
};
 
student* average(student *p,int count){
    student* maxstu=p;
    for(int i=1;i<count;i++){
        if(p[i].score>=maxstu->score) maxstu=&p[i];
    }
    int fuck=0;
    for(int i=0;i<count;i++){
 
        if(p[i].score==maxstu->score) fuck++;;
    }
 
    for(int i=0,j=0;i<count;i++){
        if(p[i].score==maxstu->score) {
