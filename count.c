#include<stdio.h>
#include<math.h>
int count(int n)
{
    if(n==0) 
    return n;
    return 1+count(n/10);
}
int main()
{
    int x= count(14784);
    int y=count(446982);
    printf("%d %d",x,y);
}
