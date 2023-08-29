#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,a=65,b=97;
   clrscr();
   for(i=1;i<=5;i++)
   {
     for(j=1;j<=i;j++)
     {
      if(j%2==0)
      {
      printf("%c ",a);
      }
      else
      {
      printf("%c ",b);
      }
      a++;
      b++;
      }
     printf("\n");
     }
     getch();

}
