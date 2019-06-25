int fun(char *str,char *substr){
    int len1=-1,len2=-1;
    while(str[++len1]!=0);
    while(substr[++len2]!=0);
 
    //printf("%d",len1);
    int count=0;
    for(int i=0;i<=len1-len2;i++){
        int flag=1;
        for(int j=0;substr[j]!=0;j++){
            if(str[i+j]!=substr[j]){flag=0;break;}
        }
        if(flag) count++;
    }
    return count;
}
