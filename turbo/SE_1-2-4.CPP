#include<stdio.h>
#include<conio.h>
void main()
{
   int a=1,n,i;
   clrscr();
   printf("enter any number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("%d\t",a);
   a=a*2;
   }
   getch();

}
