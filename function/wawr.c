#include<stdio.h>
int product(int a,int b)
{
     int t;
     t=a*b;
     return t;

} 

  int main()
{

   int x,y,p;
   printf("enter a and b:");
   scanf("%d%d",&x,&y);
   printf("\nhiii\n");
   p=product(x,y);
   printf("product of a and b:%d",p);
   printf("\nbyy\n");
  
}