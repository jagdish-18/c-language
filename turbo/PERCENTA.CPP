#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
printf("enter marks");
scanf("%d",&m);
if(m>=75)
{
printf("grade a");
}
else if(m>=60)
{
printf("grade b");
}
else if(m>=45)
{
printf("grade c");
}
else if(m>=35)
{
printf("grade c");
}
else if(m<35)
{
printf("fail");
}
getch();
}