#include <stdio.h>
int main()
{
    int n=5;
    int x=1,y=1;
    int z=0;
    for(int i=0;i<=5;i++){
        if(i==1||i==2)
        {
            printf("%d",1);
            return 0;
        }
        else{
            z=x+y;
            x=y;
            y=z;
            
        }
    }
    printf("%d",n);

}