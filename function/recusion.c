#include<stdio.h>
int fun(int n)
{
   printf("winding phase:%d\n",n);
   if(n<3)
   {
    fun(++n);
   }
   printf("unwinding phase:%d\n",n);


}
  int main()
{
  fun(1);
}