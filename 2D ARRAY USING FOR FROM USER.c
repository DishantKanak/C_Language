#include<stdio.h>

void main() {
    int row, col;

    // Asking user to input the number of rows and columns
    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &col);

    // Declaring the 2D array
    int arr[row][col];

    // Nested loops to take input for each element of the 2D array
    for(int m = 0; m < row; m++) {
        for(int n = 0; n < col; n++) {
            printf("Enter Value [%d][%d]: ", m, n);
            scanf("%d", &arr[m][n]);
        }
    }

    // Optionally, printing the entered values (if you want to check them)
    printf("\nYour's Array:\n");
    for(int m = 0; m < row; m++) {
        for(int n = 0; n < col; n++) {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }
}
