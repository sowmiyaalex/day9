#include <stdio.h>
#include<math.h>
int rev(int x,int y)
{
    if(x==0)return y;
    return rev(x/10,y*10+(x%10));
    
}
int main()
{
    printf("%d",rev(345,0));
}