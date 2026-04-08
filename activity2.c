#include<stdio.h>
int main()

{
    int a,b;
    printf("enter the number a\n");
    scanf("%d",&a);
    printf("enter the number b\n");
    scanf("%d",&b);
    if(a>b)
    printf("a is greater than b\n");
    else if(a<b)
    printf("b is greater than a\n");
    else
    printf("a is equal to b");
    return 0;
}


