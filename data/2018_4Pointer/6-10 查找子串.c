char* search(char *txt, char *pat)
{
    int i,j;
    
    int len1,len2;
    for(len1=0;txt[len1]!=0;len1++);
    for(len2=0;pat[len2]!=0;len2++);
    if(len2==0) return NULL;
    char *p=NULL;
    for(i=0;i<=len1-len2;i++){
        //printf("%c:\n",txt[i]);
        p=(char*)txt+i;
        for(j=0;txt[i+j]!=0 && pat[j]!=0;j++){
            //printf("%d,%c -- %c\n",j,txt[i+j],pat[j]);
            if(pat[j]!=txt[i+j]) {p=NULL;break;}
 
        }
        if(NULL!=p) break;
    }
    return p;
 
}
