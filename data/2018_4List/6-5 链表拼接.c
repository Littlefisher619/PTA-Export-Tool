struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
  int a[100],count=0,i,j,temp;
  struct ListNode *p1,*p2,*p;
  
  p1=list1;
  while(p1)
  {
      a[count]=p1->data;
      p1=p1->next;
      count++;
  }
  
  p2=list2;
  while(p2)
  {
    a[count]=p2->data;
    p2=p2->next;
    count++;
  }
  
  for(j=0;j<count-1;j++)
  {
    for(i=0;i<count-1-j;i++)
    {
      if(a[i]>a[i+1])
      {
