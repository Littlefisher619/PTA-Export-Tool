double getScore(int *score, int total){
    int sum=0,maxn=-1,minn=101;
    int i;
    for(i=0;i<total;i++) sum+=score[i],maxn=score[i]>maxn?score[i]:maxn,minn=score[i]<minn?score[i]:minn;
    return 1.0*(sum-maxn-minn)/(total-2);
 
}
