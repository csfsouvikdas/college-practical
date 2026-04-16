#include <stdio.h>

// Function Prototypes
void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

int main() {
    int x, y;

    printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);

    printf("\n--- Original Values ---\n");
    printf("x = %d, y = %d\n", x, y);

    // 1. Trying Call by Value
    printf("\nAttempting Swap by Value...");
    swapByValue(x, y);
    printf("After swapByValue, in main: x = %d, y = %d (No change!)\n", x, y);

    // 2. Trying Call by Reference
    printf("\nAttempting Swap by Reference...");
    swapByReference(&x, &y); // Passing addresses of x and y
    printf("After swapByReference, in main: x = %d, y = %d (Swapped!)\n", x, y);

    return 0;
}

// Logic: Copies of the values are swapped, but the original variables in main stay the same.
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Logic: We use pointers to go to the actual memory address and swap the values there.
void swapByReference(int *a, int *b) {
    int temp = *a; // temp = value at address a
    *a = *b;       // value at address a = value at address b
    *b = temp;     // value at address b = temp
}