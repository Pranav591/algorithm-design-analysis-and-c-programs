#include<stdio.h>
int main()
{
    int area;
    int length;
    int breadth;
    printf("Enter the length");
    scanf("%d",&length);
    printf("enter the breadth");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("area of the rectangle is:%d",area);
    return 0;


}