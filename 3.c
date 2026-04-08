#include <stdio.h>
int main()
{
    int x=11, y=5;
    x=x+y;//x now becomes 16
    y=x-y;//y becomes 11
    x=x-y;//x becomes 5

    printf("After swapping: x=%d, y=%d",x,y);

    return 0;

}