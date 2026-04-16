#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp[100];

    printf("Enter the first string: ");
    scanf("%s", str1); // Note: %s reads until the first space
    printf("Enter the second string: ");
    scanf("%s", str2);

    // 1. strlen() - Find length
    printf("\n1. Length of '%s' is: %lu", str1, strlen(str1));

    // 2. strcpy() - Copy string
    strcpy(temp, str1);
    printf("\n2. Str1 copied to temp: %s", temp);

    // 3. strcat() - Concatenate (Join) strings
    // Joining str2 to the end of temp
    strcat(temp, str2);
    printf("\n3. Concatenated string: %s", temp);

    // 4. strcmp() - Compare strings
    int result = strcmp(str1, str2);
    printf("\n4. Comparison: ");
    if (result == 0) {
        printf("Both strings are identical.");
    } else if (result > 0) {
        printf("'%s' comes after '%s' alphabetically.", str1, str2);
    } else {
        printf("'%s' comes before '%s' alphabetically.", str1, str2);
    }

    printf("\n");
    return 0;
}