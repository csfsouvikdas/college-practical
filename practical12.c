#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1;
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d", t1);
        
        // Add a comma after numbers except for the last one
        if (i < n) {
            printf(", ");
        }

        // Calculate the next term
        nextTerm = t1 + t2;
        
        // Update values for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\n");

    return 0;
}