#include<stdio.h>
int main()
{
    int x;
    int y=25;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    switch(x>y)
    {
        case 1:
            printf("User entered value is greater than y\n" );
            break;
        case 2:
            printf("User entered value is less than y\n");
            break;
        default:
            printf("User has entered the negative number");
            break;
    }
        return 0;

}