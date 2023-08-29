#include<stdio.h>
#include<conio.h>
void main()
{
   int a,n,i;
   clrscr();
   printf("enter a number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==1)
     {
       printf("\t%d",i);
     }
     else
     {
     a=i*i;
     printf("\t%d",a);
     }
   }
   getch();
}