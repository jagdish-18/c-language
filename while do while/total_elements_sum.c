#include<stdio.h>
void main()
{
    int a[8],sum=0,i;
    for(i=0;i<8;i++)
    {
    printf("enter a[%d]:",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
       sum=a[i]+sum;
    }
    printf("total elements sum=%d",sum);
 


}