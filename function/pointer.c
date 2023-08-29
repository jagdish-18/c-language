#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55};
    int *p;
    p=&a;
    for(int i=0;i<5;i++)
    {
        printf("%d\t%u\n",*(p+i),(p+i));
       // printf("%d\t%u\n",a[i],&a[i]);
    } 
}
/*

{
    int a=50,*p,**q;
    p=&a;
    q=&p;
    printf("value of a is:%d\n",a);
    printf("address of a is:%u\n",&a);
    printf("address of a using p:%d\n",p);
    printf("address of p:%u\n",&p);
    printf("value of a using p:%d\n",*p);
    printf("address of p using q:%u\n",q);
    printf("addres of q is:%d\n:",&q);
    printf("value of a using q is:%d\n",**q);

}
*/
