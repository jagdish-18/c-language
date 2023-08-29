#include<stdio.h>
#include<conio.h>
void main()
{
float sal,g;
float da,hra;
clrscr();
printf("enter salary");
scanf("%f",&sal);
if(sal<5000)
{
da=(sal*80)/100;
hra=(sal*80)/100;
g=sal+da+hra;
printf("gross salary %f",g);
}
else if(sal>5000 && sal<=1000)
{
da=(sal*30)/100;
hra=(sal*12)/100;
g=sal+da+hra;
printf("gross salary %f",g);
}
else if(sal>10000 &&<=15000)
{
da=(sal*40)/100;
hra=(sal*15)/100;
g=sal+da+hra;
printf("gross salary %f",g);
}
else if (sal>15000)
{
da=(sal*50)/100;
hra=(sal*20)/100;
g=sal+da+hra;
printf("gross salary %f",g);
}
getch();
}












}