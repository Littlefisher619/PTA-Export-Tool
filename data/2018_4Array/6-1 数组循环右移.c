int ArrayShift( int a[], int n, int m ){
    int tmp[n];
    for(int i=0;i<n;i++){
        tmp[(i+m)%n]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=tmp[i];
    }
 
}
