#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter your letter:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'
||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')

printf("your vowel");

else
{
printf("your consonant");
}
getch();
}