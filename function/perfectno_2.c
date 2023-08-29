#include<stdio.h>
int perfect(int n)
{
   int i,sum=0;
   for(i=1;i<n;i++)
   {
    if(n%i==0)
    {
     sum=sum+i;
    printf("%d",i);
    }
  }
   return sum; 

}
  int main()
{
  int num,x;
  printf("enter number:");
  scanf("%d",&num);
  x=perfect(num);
  if(x==num)
   printf("\n your number is perfect:");
  else
    printf("\n your number is not perfect");
}
 