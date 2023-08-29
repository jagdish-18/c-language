#include<stdio.h>
void main()
{
  
     char str[20];
     printf("enter string:");
     scanf("%[^\n]s",&str);

 
    printf("your string is:%s",str);
 
    int i=0;
    while(str[i] != '\0')
    {
    i++;
    }
    printf("\nstring length is:%d",i);
 
 
}