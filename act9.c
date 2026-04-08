#include<stdio.h>
int sumofNaturalNumber(int n)
{
if (n==0)
 {
return 0;
    }

return n + sumofNaturalNumber(n-1);
}
int main()
{
    int n;
    printf("enter the no:\n");
    scanf("%d",&n);
    if(n<0){
        printf("please enter the positive number");
    }
    else{
        printf("sum of the natural number up to%d is:%d",n,sumofNaturalNumber(n));
    }
    return 0;
}
