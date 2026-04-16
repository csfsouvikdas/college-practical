#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Logic: 
    // 1. Get the last digit with % 
    // 2. Add it to the reversed number (shifted by 10)
    // 3. Remove the last digit with /
    while (n != 0) {
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n /= 10;
    }

    printf("Reversed Number: %d\n", reversed);

    return 0;
}