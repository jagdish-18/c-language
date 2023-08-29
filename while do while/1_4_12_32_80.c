#include<stdio.h>
void main()
{

     int a=1,b=1,n,i;
     printf("enter n");
     scanf("%d",&n);
     i=1;
     do
     {
     printf("%d ",a);
     a=a*2;
     b=b*2;
     a=a+b;
     i++;
     }
     while(i<=n);



}