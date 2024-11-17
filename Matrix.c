#include <stdio.h>
#define rowsize 3
#define colsize 3

int main() {
    int matrix[rowsize][colsize];
    int n, sumDiagonal = 0;
    int i,j;

    // Ask the user for the size of the square matrix
    printf("Enter the size of the square matrix : ",matrix[rowsize][colsize]);
    scanf("%d", &n);

    // Read the elements of the matrix from the user
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Set zero in the lower triangular part of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            matrix[i][j] = 0;
        }
    }

    // Compute the sum of the diagonal elements of the matrix
    for (i = 0; i < n; i++) {
        sumDiagonal += matrix[i][i];
    }

    // Display the matrix with the lower triangular part set to zero
    printf("Matrix with the lower triangular part set to zero:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the sum of the diagonal elements
    printf("Sum of diagonal elements: %d\n", sumDiagonal);

    return 0;
}
