//local variable
#include<stdio.h>
void dis(int m,int s,int e,int t,float p)
 
{
    printf("maths marks: %d\n",m);
    printf("scince marks:%d\n",s);
    printf("english marks:%d\n",e);
    printf("total marks:%d\n",t);
    printf("percentage:%.2f\n",p);

}

void clac(int m,int s, int e)
{

    int t;
    float p;
    t=m+s+e;
    p=(float)t/3;
    dis(m,s,e,t,p);
}
void setdata()
{
   int m,s,e;
  
   printf("enter maths marks:");
   scanf("%d",&m);
   printf("enter scince marks:");
   scanf("%d",&s);
   printf("enter english marks:");
   scanf("%d",&e);
   clac(m,s,e); 
}
 
 
 int main()
{
 setdata();
   
}
