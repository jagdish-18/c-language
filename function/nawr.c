#include<stdio.h>
int add()
{
    int a,b,t;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    t=a+b;
    return t; 

}

   int main()
{
    int x;
    x=add();
    printf("\nhiiii\n");
    printf("addition of a and b:%d",x);
    printf("\nhello\n");

}