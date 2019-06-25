int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int sum(int a,int b){
    return a+b;
}
int compute(int a,int b,int(*func)(int, int)){
    return func(a,b);
}
