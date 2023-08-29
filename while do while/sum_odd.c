#include<stdio.h>
void main()
{
  int i,n,sum=0;
  i=1;
  printf("enter n");
  scanf("%d",&n);
  do
  {
  sum=sum+=i;
  printf("%d ",i);
  i+=2;
  }
  while(i<=n);
  printf("\nsum%d",sum);



}
