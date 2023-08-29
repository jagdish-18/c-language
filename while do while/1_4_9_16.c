#include<stdio.h>
void main()
{
      int a,n,i;
      a=1;
      printf("enter n");
      scanf("%d",&n);
      while(a<=n)
      {
      i=a*a;
      printf("%d ",i);
      a++;
      }
}