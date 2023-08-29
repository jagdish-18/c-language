#include<stdio.h>
int marks()
{
    int a,p,maths,eng,guj;
    printf("enter a three subject marks:");
    scanf("%d%d%d",&maths,&eng,&guj);
    a=maths+eng+guj;
    p=(a*100)/300;
    
    printf("three subject total marks:%d",a);
    printf("percentage:%d",p);
    

}
   int main()
{ 
  printf("\nhello\n");
   marks();
 

}