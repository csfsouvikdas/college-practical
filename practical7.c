#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Logic:
    // 1. Divisible by 400 is ALWAYS a leap year.
    // 2. Divisible by 100 but not 400 is NOT a leap year.
    // 3. Divisible by 4 but not 100 is a leap year.
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}