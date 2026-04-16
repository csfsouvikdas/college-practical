#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask user for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    // We use 9.0 and 5.0 to ensure decimal precision
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the result
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);

    return 0;
}