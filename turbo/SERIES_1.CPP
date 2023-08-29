#include<stdio.h>
#include<conio.h>
void main()
{
  int a,n,i;
  clrscr();
  printf("enter a number");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
  i=a*a;
  printf("\t%d",i);
  }
  getch();

}