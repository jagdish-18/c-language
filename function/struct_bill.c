#include<stdio.h>
struct product
{
    int no;
    char name[20];
    int rate,qty,amt;
    float bill,gst,disc,netbill;
};
void main()
{
    struct product a[5];
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter id no:");
        scanf("%d",&a[i].no);
        printf("enter a name:");
        scanf("%s",a[i].name);
        printf("enter qty:");
        scanf("%d",&a[i].qty);
        printf("enter rate:");
        scanf("%d",&a[i].rate);
        

    } 
       printf("\nno\tname\tqty\trate\tamt\tdisc\tbill\tgst18\tnetbill");

       for(i=0;i<2;i++)
       {
        a[i].amt=a[i].rate*a[i].qty;
        a[i].disc=a[i].amt*0.05;
        a[i].bill=a[i].amt-a[i].disc;
        a[i].gst=a[i].bill*0.18;
        a[i].netbill=a[i].bill + a[i].gst;

        printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f\t\t%.2f",a[i].no,
        a[i].name,a[i].rate,a[i].qty,a[i].amt
        ,a[i].disc,a[i].bill,a[i].gst,a[i].netbill);
         
         printf("\n");

      
       }
}
