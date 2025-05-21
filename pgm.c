#include<stdio.h>
#include<math.h>
int sum(int n)
{
    if(n==1) 
    return n;
    return sum(n-1);
}
int main()
{
    int x= sum(4);
    printf("%d",x);
}