#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declaring array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Adding to total sum as we take input
    }

    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];

    // Loop to find Max and Min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    average = sum / n;

    printf("\n--- Array Statistics ---\n");
    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n", min);
    printf("Sum of Elements: %.2f\n", sum);
    printf("Average:         %.2f\n", average);

    return 0;
}