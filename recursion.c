/**#include<stdio.h>
#include<math.h>
void number(int x)
{
    while(x>0)
    {
        printf("%d ",x);
        x-=1;
    }
}
int main()
{
    number(10);
}/** */
#include<stdio.h>
#include<math.h>
void numbers(int x)
{
   if(x==0) return;
   printf("%d ",x);
   numbers(x-1);
}
int main()
{
    numbers(10);
}

