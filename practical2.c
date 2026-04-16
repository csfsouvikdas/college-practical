#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, product, average;

    // Asking for user input
    printf("Enter two numbers separated by a space: ");
    scanf("%f %f", &num1, &num2);

    // Performing calculations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    average = (num1 + num2) / 2;

    // Displaying the results
    printf("\n--- Results ---\n");
    printf("Sum:        %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product:    %.2f\n", product);
    printf("Average:    %.2f\n", average);

    return 0;
}