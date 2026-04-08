#include <stdio.h>
void addNumbers(int*num1,int*num2,int*sum);
int main()
{
    int num1,num2,sum;
    printf("Enter the num1\n");
    scanf("%d",&num1);
    printf("Enter the num2\n");
    scanf("%d",&num2);
    
    addNumbers(&num1,&num2,&sum);
    printf("\nsum of %dand%d =%d\n",num1,num2,sum);
    return 0;
}
void addNumbers(int*num1,int*num2,int*sum)
{
    *sum=*num1+*num2;
    
}