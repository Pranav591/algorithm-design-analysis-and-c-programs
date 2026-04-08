#include <stdio.h>
int main() 
{
    char username[20]; // Array to store username
    int password;
    printf("Username: ");
    scanf("%s", username); // Read the username as a string
    printf("Password: ");
    scanf("%d", &password); 
    if (strcmp(username,"admin") == 0) 
    { 
        if (password == 12345) 
        {
            printf("Login successful\n");
            }
        else {
            printf("Password is incorrect, Try again.\n");
            }
    }
    else {
        printf("Username is incorrect, Try again.\n");
        }
    return 0;
    
}