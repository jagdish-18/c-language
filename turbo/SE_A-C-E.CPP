#include<stdio.h>
#include<conio.h>
void main()
{
 char a;
 clrscr();
 for(a=65;a<=90;a+=4)
 {
 printfd("\t%c",a);
 printf("\t%c",a+34);
 }
 getch();

}