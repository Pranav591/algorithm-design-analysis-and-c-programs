#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number x\n");
    scanf("%d",&x);
    printf("Enter the number y\n");
    scanf("%d",&y);
    printf("incremented value %d \n",x+=5);
    printf("decremented value %d\n",y-=2);
    return 0;
}
