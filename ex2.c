#include <stdio.h>
int main()
{
    int x;
    printf("enter the number x\n");
    scanf("%d",&x);
    if (x>0){
    printf("The number entered is positive");}

    else if (x<0){
        printf("The number entered is negative");
    }
    else{
        printf("The number entered is zero");
    }
    return 0;
}