#include<stdio.h>
void main()
{
   int a[5],i,sum=0,b=0;
   for(i=0;i<5;i++)
   {
    printf("enter a[%d]:",i); 
    scanf("%d",&a[i]);
   }
    for(i=0;i<5;i++)
    {
      if(a[i]%2==0)
      sum=a[i]+sum;
      else
      b=a[i]+b;
    }
    printf("even=%d",sum);
    printf("odd=%d",b);

}