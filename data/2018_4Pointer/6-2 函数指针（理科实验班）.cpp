bool s2(const Student &a, const Student &b)
{
  return a.score[0]+a.score[1]>b.score[0]+b.score[1];
}
bool s4(const Student &a, const Student &b)
{
  return a.score[0]+a.score[1]+a.score[2]+a.score[3]>b.score[0]+b.score[1]+b.score[2]+b.score[3];
}     
int select (Student st[],int n,auto s)
{
    int maxNum=0;
    for(int i=1;i<n;i++)
    {
        if(s(st[maxNum],st[i]))
            continue;
        else 
            maxNum=i;
    }
    return st[maxNum].num;
}
