#include<stdio.h>
void main()
{ 
     int i,sum=0;
     i=1;
     while(i<=10)
     {
     sum=sum+=i;
     printf("\n%d",i);
     i++;
     }
     printf("\nsum%d",sum);



}