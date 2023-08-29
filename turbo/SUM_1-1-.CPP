#include<stdio.h>
#include<conio.h>
 void main()
{
  int i,a,n=1;
  clrscr();
  printf("enter a number");
  scanf("%d",&a);
  for(i=0;i<=a;i=a)
  {
   a=n+i;
   printf("\t%d",a);
   n=i;
   }
   getch();

}