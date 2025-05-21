#include<stdio.h>
#include<math.h>
void numbers(int x)//declaration
{
   if(x==5) return;//base condition
   printf("%d",x);
   numbers(x-1);
}
   void numbersdesc (int x)//declaration
{
   if(x==0) return;//base condition
   
   numbersdesc(x-1);
   printf("%d\n",x);//10 9 8 7 6 5 4 3 2 1
}
int main()
{
    numbers(10);
    numbersdesc(10);
}

