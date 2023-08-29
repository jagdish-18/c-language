#include<stdio.h>
#include<conio.h>
void main()
{
   float a=0.5,n,i;
   clrscr();
   printf("enter any number:");
   scanf("%f",&n);
   for(i=1;i<=n;i=2)
   {
    printf("%f\t",i);
    a=a+(i/2);
    }
    getch();

}