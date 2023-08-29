#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a;
    clrscr();
    for(i=1;i<=25;i+=5)
    {
	for(j=0;j<5;j++)
	{
	a=i+j;
	printf("%d ",a);
	}
	printf("\n");
     }
     getch();


}