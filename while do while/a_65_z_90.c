#include<stdio.h>
void main()
{

    char a=65;
    int i=a;
    do
    {
    printf("%c ",a);
    printf("%d ",i);
    a++;
    i++;
    }
    while(a<=90 && i<=a);  


}