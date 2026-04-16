#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    // Get file names from user
    printf("Enter source file name (e.g., practical27.txt): ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

    // Open source file for reading
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", sourcePath);
        exit(1);
    }

    // Open destination file for writing
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        fclose(sourceFile); // Close the first one before exiting
        printf("Error: Cannot create destination file %s\n", destPath);
        exit(1);
    }

    // Copying logic: character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from %s to %s.\n", sourcePath, destPath);

    // Always close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}