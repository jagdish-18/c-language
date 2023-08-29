#include<stdio.h>
void main()
{
    int i;
    for(i=0;i<=15;i++)
    {
        if(i==6 || i==12)
        {
            continue;
        }
        printf("%d ",i);
    }
}