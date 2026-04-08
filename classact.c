#include <stdio.h>  // Include the standard input-output library

int main() {  // Main function - entry point of the program
    int rows = 8;  // Declare an integer variable 'rows' and initialize it to 8 (height of the pyramid)
    
    // Print a message indicating the start of the pyramid output
    printf("The full Pyramid output is\n");
    
    // Outer loop to iterate through each row of the pyramid
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop to print spaces before the asterisks for centering the pyramid
        for (int k = i; k < rows; k++) {
            printf(" ");  // Print a space
        }
        
        // Inner loop to print the asterisks for the current row
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");  // Print an asterisk followed by a space
        }
        
        // Move to the next line after printing all asterisks for the current row
        printf("\n");
    }
    
    return 0;  // Return 0 to indicate successful execution of the program
}