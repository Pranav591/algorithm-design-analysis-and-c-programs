#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number a:\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("the given number is even number");
    else
    printf("the given number is odd ");
    return 0;
}