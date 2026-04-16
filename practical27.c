#include <stdio.h>
#include <stdlib.h> // Needed for exit()

int main() {
    char text[200];
    FILE *fptr;

    // --- 1. WRITING TO A FILE ---
    // "w" mode creates a new file or overwrites an existing one
    fptr = fopen("practical27.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter some text to save in the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);
    fclose(fptr);
    printf("Data saved successfully.\n");

    // --- 2. READING FROM THE FILE ---
    // "r" mode opens an existing file for reading
    printf("\nReading data from practical27.txt:\n");
    fptr = fopen("practical27.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    // Read the file line by line and print it
    while (fgets(text, sizeof(text), fptr) != NULL) {
        printf("%s", text);
    }

    fclose(fptr);
    return 0;
}