#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Conversion formula: (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%.2f°F is equal to %.2f°C\n", fahrenheit, celsius);

    return 0;
}