void fun(char *s){
    while(*s!=0) *s=(*s>='0' && *s<='9')?'#':*s,s++;
}
