#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter value n");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
    printf("divisible");
    }
    else
    {
    printf("not divisible");
    }
    getch();

}