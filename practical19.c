#include <stdio.h>

int main() {
    int r, c, i, j, k;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sum[r][c], diff[r][c], mult[r][c];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Addition, Subtraction, and Initializing Multiplication Matrix
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
            mult[i][j] = 0; // Initialize result matrix for multiplication
        }
    }

    // Multiplication Logic (Dot Product)
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            for(k = 0; k < c; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying Results
    printf("\n--- Addition Result ---\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) printf("%d\t", sum[i][j]);
        printf("\n");
    }

    printf("\n--- Subtraction Result ---\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) printf("%d\t", diff[i][j]);
        printf("\n");
    }

    printf("\n--- Multiplication Result ---\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) printf("%d\t", mult[i][j]);
        printf("\n");
    }

    return 0;
}