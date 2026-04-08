#include <stdio.h>
int main()
{
    int i,sum,n;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of the no n is;%d\n",sum);
    return 0;
}