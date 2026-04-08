/*#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, nextterm, n = 10;

    // Print the first two Fibonacci numbers
    printf("Fibonacci numbers: %d, %d", t1, t2);

    // Generate the Fibonacci sequence from the 3rd term to the nth term
    for (int i = 3; i <= n; ++i) {
        nextterm = t1 + t2; // Calculate the next term
        printf(", %d", nextterm); // Print the next term
        t1 = t2; // Update t1 to the previous term
        t2 = nextterm; // Update t2 to the new term
    }

    printf("\n"); // Print a newline at the end
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int num,renum=0,remainder,ognum;
    printf("enter the num");
    scanf("%d",&num);

    ognum=num;

    while(num != 0)
    {
        remainder= num % 10;
        renum= renum * 10 + remainder;
        num /= 10;
    }
        if (ognum == renum)
        {
            printf("%d is a palindrome num",ognum);
             }
        else{
            printf("%d is not a palindrome number",ognum);
        } 

        return 0;    
}
*/
/*#include <stdio.h>
int main()
{
    int n,i;
    unsigned long fact=1;

    printf("enter the number n:");
    scanf("%d",&n);
     if(i<0){
        printf("factorial of negative number donot exist");

     }
     else{
        for(i=1;i<=n;i++){
            fact*=i;
            
        }
        printf("The factorial of no %d is : %lu",n,fact);
     }
     return 0;

}
#include <stdio.h>
int main(){
    int i,n,sum;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum+=i;
    }
    printf("sum of the no enter by the user is:%d\n",sum);
    return 0;

#include <stdio.h>
int main()
{
    int n=5;
    int i;
    printf("The half pyramid output is\n");
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}}
#include <stdio.h>
int main(){
    int n=5;
    int i,j,k;
    printf("the output for full pyramid:\n");
    for(i=1;i<=n;i++)
    {
        for (k=1 ; k <= n-i; k++){
            printf(" ");}
             for (j=1;j <=( 2 * i - 1);j++){
                printf("%d",j);
            }
          printf("\n") ;
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n=5;
    int i,j,k;
    printf("the outputfor left half pyramid:\n");
    for(i=1;i<=n;i++)
    {
        for (k=1 ; k <=n-i; k++){
            printf( " ");}
             for (j = 1; j<=i; j++){
                printf( "%d ", j);
            }
          printf("\n") ;
    }
    return 0;
}*/
/*#include <stdio.h>
int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Enter a valid number greater than 1\n");
        return 0; // Exit the program if the input is invalid
    }

    // Check for factors of n
    for (i = 2; i <= n / 2; ++i) { // Start from 2, as 1 is a factor of every number
        if (n % i == 0) {
            count = 1; // Found a factor, so it's not prime
            break; // No need to check further
        }
    }

    // Determine if n is prime based on count
    if (count == 0) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}
#include <stdio.h>
int gcd(int n1,int n2)
{
    if(n2!=0)
    return gcd(n2,n1 % n2);
    else
    return n1;
}
int main()
{
int n1, n2;
printf("Enter rwo positive integer");
scanf("%d %d",&n1,&n2);
printf("gcd of %d  and %d is: %d",n1,n2,gcd(n1,n2));
return 0;
}
*/
#include <stdio.h>
int SumOfNaturalNumber(int n)
{
    if (n==0)
    {
        return 0;
    }
    return n +SumOfNaturalNumber(n-1);
}
int main()
{
    int n ;

    printf("enter the no\n");
    scanf("%d",&n);
    printf("the sum of natural no upto %d  is:%d" ,n,SumOfNaturalNumber(n));
    return 0;

}