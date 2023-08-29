#include<stdio.h>
void main()
{
   int i=1,sum=0,n;
   printf("enter a number:");
   scanf("%d",&n);

   while(i<n)
   {
   if(n%i==0)
   sum=sum+i;
   i++;
   }
  
   if(sum==n)
   prinf("%d is perfact no:",n);
   
   else
    printf("%d is not perfact no:",n);
}
 int main()
{
 perfact();
}  