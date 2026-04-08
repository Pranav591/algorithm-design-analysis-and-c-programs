//while loop
#include<stdio.h>
int main()
{
    int num;
    long factorial;
    printf("enter the number:\n");
    scanf("%d",&num);
    factorial=1;
    while (num>0){
        factorial*=num;
        --num;
    }
    printf("factorial=%ld",factorial);
    return 0;
}