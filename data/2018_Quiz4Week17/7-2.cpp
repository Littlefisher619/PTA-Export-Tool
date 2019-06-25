#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
#define MAX 1010
#define INF 0x3f3f3f
int n,m;
int sum1,sum2;
void display(int a,int b,int c,int d)
{
    sum1=a*c-b*d;
    sum2=a*d+b*c;
//  printf("%d %d %d %d\n",a,b,c,d);
}
int main()
{
    while(1)
    {
        int i,j,k,t;
        char s1[MAX],s2[MAX];
        int a,b,c,d;
        a=b=c=d=0;
        scanf("%s%s",s1,s2);
        int n1=strlen(s1);
        int n2=strlen(s2);
        int f1=0,f2=0;
        for(i=0;i<n1;i++)
        {
            if(s1[i]=='i')
                f1=1;
        }
        if(f1)
        {
            int cont=0;
            for(i=0;i<n1;i++)
            {
                if(s1[i]=='-'||s1[i]=='+')
                    cont++;
            }
            if(cont==0)
            {
                for(i=0;i<n1-1;i++)
                    b=b*10+s1[i]-'0';
                if(n1==1)
                    b=1;
            }
            if(cont==2)
            {
                for(i=1;i<n1-1;i++)
                {
                    if(s1[i]=='-'||s1[i]=='+')
                        break;
                    a=a*10+s1[i]-'0';
                }
                a=-a;
                k=i;
                for(++i;i<n1-1;i++)
                {
                    b=b*10+s1[i]-'0';
                }
                if(n1-k==2)
                    b=1;
        //      printf("%d\n",k);
                if(s1[k]=='-')
                    b=-b;
            }
            if(cont==1)
            {
                if(s1[0]=='-')
                {
                    for(i=1;i<n1-1;i++)
                        b=b*10+s1[i]-'0';
                    b=-b;
                    if(n1==2)
                        b=-1;
                }
                else
                {
                    for(i=0;i<n1;i++)
                    {
                        if(s1[i]=='-'||s1[i]=='+')
                            break;
                        a=a*10+s1[i]-'0';
                    }
                    k=i;
                    for(++i;i<n1-1;i++)
                    {
                        b=b*10+s1[i]-'0';
                    }
                    if(n1-k==2)
                        b=1;
                    if(s1[k]=='-')
                        b=-b;
                }
            }
        }
        else
        {
            if(n1==1)
                a=s1[0]-'0';
            else if(s1[0]=='-')
            {
                for(i=1;i<n1;i++)
                    a=a*10+s1[i]-'0';
                a=-a;
            }
            else
            {
                for(i=1;i<n1;i++)
                    a=a*10+s1[i]-'0';
            }
            b=0;    
        }
        for(i=0;i<n2;i++)
        {
            if(s2[i]=='i')
                f2=1;
        }
        if(f2)
        {
            int cont=0;
            for(i=0;i<n2;i++)
            {
                if(s2[i]=='-'||s2[i]=='+')
                    cont++;
            }
            if(cont==0)
            {
                for(i=0;i<n2-1;i++)
                    d=d*10+s2[i]-'0';
                if(n2==1)
                    d=1;
            }
            if(cont==2)
            {
                for(i=1;i<n2;i++)
                {
                    if(s2[i]=='-'||s2[i]=='+')
                        break;
                    c=c*10+s2[i]-'0';
                }
                c=-c;
                k=i;
                for(++i;i<n2-1;i++)
                {
                    d=d*10+s2[i]-'0';
                }
                if(n2-k==2)
                    d=1;
                if(s2[k]=='-')
                    d=-d;
            }
            if(cont==1)
            {
                if(s2[0]=='-')
                {
                    for(i=1;i<n2-1;i++)
                        d=d*10+s2[i]-'0';
                    d=-d;
                    if(n2==2)
                        d=-1;
                }
                else
                {
                    for(i=0;i<n2;i++)
                    {
                        if(s2[i]=='-'||s2[i]=='+')
                            break;
                        c=c*10+s2[i]-'0';
                    }
                    k=i;
                    for(++i;i<n2-1;i++)
                    {
                        d=d*10+s2[i]-'0';
                    }
                    if(n2-k==2)
                        d=1;
                    if(s2[k]=='-')
                        d=-d;
                }
            }
        }
        else
        {
            if(n2==1)
                c=s2[0]-'0';
            else if(s2[0]=='-')
            {
                for(i=1;i<n2;i++)
                    c=c*10+s2[i]-'0';
                c=-c;
            }
            else
            {
                for(i=1;i<n2;i++)
                    c=c*10+s2[i]-'0';
            }
            d=0;    
        }
        display(a,b,c,d);
        if(sum1==0&&sum2==0)
            printf("0\n");
        else if(sum1==0&&sum2!=0)
        {
            if(sum2==1)
                printf("i\n");
            else if(sum2==-1)
                printf("-i\n");
            else
                printf("%di\n",sum2);
        }
        else if(sum1!=0&&sum2==0)
            printf("%d\n",sum1);
        else if(sum1!=0&&sum2!=0)
        {
            if(sum2>0)
            {
                if(sum2!=1)
                    printf("%d+%di\n",sum1,sum2);
                else 
                    printf("%d+i\n",sum1);
            }
            else
            {
                if(sum2!=-1)
                    printf("%d%di\n",sum1,sum2);
                else
                    printf("%d-i\n",sum1);
            }
        }
    }
    return 0;
}
