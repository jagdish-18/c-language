#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,sum=0;
  clrscr();
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i+=2)
  {
  sum=sum+=i;
  printf("\t%d",i);
  }
  printf("\nsum%d",sum);
  getch();


}