#include <stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
    
}
int main()
{
    printf("%d",gcd(12,18));
}
