#include"stdio.h"
struct goods
{
    int num;
    char name[20];
    int price;
    int amount;
};
int main()
{
    struct goods good[10]=
{
{1,"Table-water",1,0},
{2,"Table-water",1,0},
{3,"Table-water",1,0},
{4,"Coca-Cola",2,0},
{5,"Milk",2,0},
{6,"Beer",3,0},
{7,"Orange-Juice",3,0},
{8,"Sprite",3,0},
{9,"Oolong-Tea",4,0},
{10,"Green-Tea",4,0}
};
    int sum=0,num,change,total=0,money=0,i=0;
    while(1)
    {
        scanf("%d",&money);
