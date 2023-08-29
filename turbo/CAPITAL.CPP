#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter ypur letar is:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
{
  ch=ch+32;
printf("ascii value is:%d",ch);
printf("capital letter:%c",ch);
}
else

 if(ch>='a' && ch<='z')

{
  ch=ch-32;
printf("ascii value is:%d",ch);
printf("small letter is%c",ch);
}
getch();
}