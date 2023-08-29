#include<stdio.h>
void main()
{
    int a=20,b=5,ch;
    printf("1.addition\n:");
    printf("1.substraction\n:");
    printf("1.multiplicatin\n:");
    printf("1.division\n:");
    printf("enter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("addition of a and b is:%d\n",a+b);
            break;

        case 2:
            printf("substrction of a and b is:%d\n",a-b);
            break;

        case 3:
            printf("multiplication of a and b is:%d\n",a*b);
            break;

        case 4:
            printf("division of a and b is:%d\n",a/b);
            break;            

        default:
            printf("wrong choice.......\n");
            break;    
          
            
    } 

}