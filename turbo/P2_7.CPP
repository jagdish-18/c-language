#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,a=65;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
    if(i%2==0)
    {
    printf("%c ",a+32);
    }
    else
    {
    printf("%c ",a);
    }
    a++;
    }
    printf("\n");
  }


  getch();

}