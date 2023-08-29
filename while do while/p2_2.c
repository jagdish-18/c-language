#include<stdio.h>
void main()
{
   int i=1;
    do
    {
    int j=1;
    while(j<=i)
    {
    printf("%d ",i);
    j++;
    }
   printf("\n");
   i++;
   }
   while(i<=5);


}