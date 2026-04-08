#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char text[1000];
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    printf("Enter text to append to the file (Press Enter to finish): ");
    getchar();  
    fgets(text, sizeof(text), stdin);
    fputs(text, file);
    fclose(file);
    printf("Text appended successfully to %s.\n", filename);
    return EXIT_SUCCESS;
}
