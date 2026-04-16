#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case 1
    } else if (n == 1) {
        return 1; // Base case 2
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
    }
}

int main() {
    int terms, i;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series using Recursion:\n");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}