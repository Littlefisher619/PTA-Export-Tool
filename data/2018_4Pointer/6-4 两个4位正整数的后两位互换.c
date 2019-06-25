void fun(int *p,int *q){
    int t1=*p%100,t2=*q%100;
    *p=*p/100*100+t2;
    *q=*q/100*100+t1;
 }
