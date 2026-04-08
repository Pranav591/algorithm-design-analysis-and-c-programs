/*#include <stdio.h>
 
  int main ()
  {
   int a;
   int b;
   int sum;
   int div;
   int multi;
   int mod;
   int sub;
   printf("enter a number a\n");
  scanf("%d",&a); 
  printf("enter a number b\n");
   scanf("%d",&b);
   sum=a+b;
   div=a/b;
   multi=a*b;
   mod=a%b;
   sub=a-b;
   printf("sum of two number%d\n",sum);
   printf("division of two numbers%d\n",div);
   printf("multiplication of two numbers%d\n",multi);
   printf("mod of two number%d\n",mod);
   printf("subtraction of two number%d\n",sub);
   return 0;
  }  */

#include <stdio.h>
int main()
{
int num1, num2;
int sum, difference, product, modulus;
float quotient;
// Input two numbers from the user 
printf("Enter any two numbers: "); 
scanf("%d %d", &num1, &num2);
// Perform arithmetic operations
sum = num1 + num2; 
difference= num1 - num2;
product = num1 * num2;
quotient = (float)num1 / num2; // Typecast to float for accurate division
modulus = num1 % num2;

// Print results
printf("SUM=%d\n", sum);
printf("DIFFERENCE = %d\n", difference);
printf("PRODUCT = %d\n", product);
printf("QUOTIENT=%.2f\n", quotient); // Display quotient with 2 decimal
printf("MODULUS = %d\n", modulus);
return 0;
}