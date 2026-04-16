#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter marks for 5 subjects (out of 100 each):\n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    // Calculate total and percentage
    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks: %.2f / 500.00\n", total);
    printf("Percentage:  %.2f%%\n", percentage);

    // Determine Grade
    printf("Grade:       ");
    if (percentage >= 90) {
        printf("A+\n");
    } else if (percentage >= 80) {
        printf("A\n");
    } else if (percentage >= 70) {
        printf("B\n");
    } else if (percentage >= 60) {
        printf("C\n");
    } else if (percentage >= 40) {
        printf("D\n");
    } else {
        printf("F (Fail)\n");
    }

    return 0;
}