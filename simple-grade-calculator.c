// 1  User enters marks between 0–100.

// 2  The program checks the range and prints a grade:

// 90–100 → A+

// 80–89 → A

// 70–79 → B

// 60–69 → C

// 50–59 → D

// Below 50 → F


// code 

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        printf("Grade: A+\n");
    else if (marks >= 80)
        printf("Grade: A\n");
    else if (marks >= 70)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else if (marks >= 50)
        printf("Grade: D\n");
    else if (marks >= 0)
        printf("Grade: F (Fail)\n");
    else
        printf("Invalid marks entered!\n");

    return 0;
}
