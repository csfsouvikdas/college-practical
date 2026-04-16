#include <stdio.h>

// Defining the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Creating an array of structures
    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", s[i].name); // Use %s for a single word name
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Displaying student details
    printf("\n--- Student Records ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll No.", "Marks");
    printf("------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}