#include <stdio.h> // Correct header file

// Function to calculate GCD using recursion
int gcd(int n1, int n2) {
    if (n2 != 0) 
        return gcd(n2, n1 % n2); // Recursive case
     else 
        return n1; // Base case
    
}

int main() {
    int n1, n2;

    // Ask the user for input
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);


    return 0; // Correct return statement
}