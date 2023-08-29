#include<stdio.h>
int product(int a,int b)
{
    int t;
    t=a*b;
    printf("product of a and b:%d",t);
}

 int main()
{
  int x,y;
  printf("enter x and y:");
  scanf("%d%d",&x,&y);
  printf("\nhii\n");
  product(x,y);
  printf("\nbyyy\n");

} 