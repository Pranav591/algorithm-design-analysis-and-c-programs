#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping, the value of x=%d,and y=%d",x,y);
    return 0;
}