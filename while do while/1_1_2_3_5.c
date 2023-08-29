#include<stdio.h>
void main()
{
   
     int i,a=1,b=1,c,n;
     printf("enter n");
     scanf("%d",&n);
     printf("%d%d ",a,b);
     i=1;
     while(i<=n)
     {
     c=a+b;
     printf("%d ",c); 
     a=b;
     b=c;
     i++;
     }



}