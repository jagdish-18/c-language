#include<stdio.h>
void main()
{
   char str[20];
   int i;
   printf("enter a string:");
   gets(str);
   
   for(i=0;str[i]!='\0';i++)
   printf("\n your string:");
   for(i=0;str[i];i++)
   {
       if(str[i]!=' ')
       printf("%c",str[i]);  
   }
} 