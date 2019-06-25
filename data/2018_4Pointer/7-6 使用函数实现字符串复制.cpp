#include <stdio.h>
#include <iostream>
#define MAXN 20
using namespace std;
void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */
 
int main()
{
    char t[MAXN], s[MAXN];
    int m;
    int repeat;
   
    scanf("%d", &repeat);
    while(repeat--){
        getchar();
        ReadString(t);
        scanf("%d", &m);
        strmcpy( t, m, s );
        printf("%s\n", *s==0?"error input":s);
    }
    return 0;
}
 
/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s ){
    int lent=-1;
