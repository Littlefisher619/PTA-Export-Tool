#include <iostream>
#include <iomanip> 
#define DEBUG false
using namespace std;
class Martix
{
    int row;
    int column;
    int **mat;
public:
    Martix():row(0),column(0){}
    Martix(int r,int c):row(r),column(c){
 
        mat=(int **) new int *[r];
        for (int i = 0; i < r; i++){
            mat[i] = new int[column];
        }
    }
    void init(int r,int c){
        row=r,column=c;
        mat=(int **) new int *[r];
        for (int i = 0; i < r; i++){
            mat[i] = new int[column];
        }
    }
    bool isInvalid() const{return row==0 || column==0;}
    Martix operator*(const Martix &m){
