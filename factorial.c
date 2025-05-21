#include<stdio.h>
#include<math.h>
int mul(int n)
{
    if(n==1) 
    return n;
    return n*mul(n-1);
}
int main()
{
    int x= mul(4);
    printf("%d",x);
}