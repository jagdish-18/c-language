#include<stdio.h>
#include<conio.h>
void main()
{
   int i,a=1,b=1,c,n;
   clrscr();
   printf("n:");
   scanf("%d",&n);
   printf("\t%d %d",a,b);
   for(i=1;i<=n;i++)
   {
   c=a+b;
   printf("\t%d",c);
   a=b;
   b=c;
   }
   getch();

}