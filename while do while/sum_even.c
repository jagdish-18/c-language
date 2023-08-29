#include<stdio.h>
void main()
{

    int i,n,sum=0;
    i=2;
    printf("enter n");
    scanf("%d",&n);
    while(i<=n)
    {
    sum=sum+=i;
    printf("%d ",i);
    i+=2;
    }  
    printf("\nsum%d",sum); 



}