#include<stdio.h>
void main()
{

     int eng[5],maths[5],guj[5],i,total,grade;
     float per;
     for(i=0;i<5;i++)
     {
     printf("enter eng[%d]:",i);
     scanf("%d",&eng[i]);
     }
     for(i=0;i<5;i++)
     {
     printf("enter maths[%d]:",i);
     scanf("%d",&maths[i]);
     }
     for(i=0;i<5;i++)
     {
     printf("enter guj[%d]:",i);
     scanf("%d",&guj[i]); 
     }
     printf("eng\tmaths\tguj\ttotal\tper\tgrade\n");
     for(i=0;i<5;i++)
     {
     total=eng[i]+maths[i]+guj[i];
     per=total/3;
     printf("%d\t%d\t%d\t%d\t%.2f\t",eng[i],maths[i],guj[i],total,per);
     
     if(eng[i]<35 || maths[i]<35 || guj[i]<35)
     { 
     printf("fail");
     }
     else if(per>=90)
     {
     printf("grade A:");
     }
     else if(per>=75)
     {
     printf("grade B:");
     }
     else if(per>=65)
     {
     printf("grade C:");
     }
     else if(per>=45)
     {
     printf("grade D:");
     }
     else if(per>=35)
     {
     printf("pass");
     }     
    printf("\n"); 
       } 
        
}