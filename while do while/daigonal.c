#include<stdio.h>
void main()
{
   int a[5][5],i,j,sum=0,sum2=0,total=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       printf("enter a[%d][%d]:",i,j);
       scanf("%d",&a[i][j]); 
       }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
   
           if(a[i]==a[j])
           sum=sum+a[i][j];
 
           if(a[i]<a[j])
            sum2=sum2+a[i][j];
   
           if(a[i]>a[j])
           total=total+a[i][j];
 
          }
     }
   
     printf("\n total of daigonal:%d",sum);
  
     printf("\n total of upar triangle:%d",sum2);
   
     printf("\n total of lower triangle:%d",total); 
        
}