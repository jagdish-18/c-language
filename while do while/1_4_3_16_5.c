#include<stdio.h>
void main()
{

     int i=1,n,a;
     printf("enter n");
     scanf("%d",&n);
     do
     {
     if(i%2==0)
     printf("%d ",i*i);
     else  
     printf("%d ",i);
     i++;
     }
     while(i<=n);
 



}