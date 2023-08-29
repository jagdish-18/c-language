#include<stdio.h>
#include<conio.h>
void main()
{
    char i,j,a;
    clrscr();
    for(i=65;i<=89;i+=5)
    {
	for(j=0;j<5;j++)
	{
	a=i+j;
	printf("%c ",a);
	}
	printf("\n");
     }
     getch();


}