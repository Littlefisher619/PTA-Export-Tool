void strmcpy( char *t, int m, char *s ){
    int lent=-1;
    while(t[++lent]!=0);
    if(m>lent) {
        *s=0;
        return;
    } 
    int j=0;
    for(int i=m-1;i<lent;i++,j++){
        s[j]=t[i];
    }
    s[j]=0;
}
