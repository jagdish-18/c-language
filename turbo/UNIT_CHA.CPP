#include<stdio.h>
#include<conio.h>
void main()
{
float unit,charge,total_amount;
clrscr();
printf("enter unit:");
scanf("%f",&unit);
if(unit<=100)
{
 charge=unit*0.6+50;
 printf("charge:%f",charge);
}
else if(unit>100 && unit<=300)
{
 charge=(100*0.6)+(100*6.8)+(unit-300)*0.9+50;
}
else if(charge>300)
{
total_amount=(charge*15)/100+charge;
printf("total amount %f",total_amount);
}
getch();
}
