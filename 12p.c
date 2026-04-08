#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];char str2[50];
    printf("Enter the string");
    scanf("%s",str);
    printf("original string:%s\n",str);

    strrev(str);
    printf("Reversed string:%s\n",str);
}