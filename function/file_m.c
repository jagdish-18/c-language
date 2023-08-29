#include<stdio.h>
void main()
{
     FILE *fp;
     fp=fopen("abc.txt","w+");
     //fp=fopen("D:girish sir/data strcture/abc.txt","w+"); 
     fprintf(fp,"welcome to skill qode,decode your skill hear..\n");
     fputs("your are entering learning c language now..\n",fp);
     fputs("we are enjoying evrey thing..\n",fp);
     fclose(fp);   
}