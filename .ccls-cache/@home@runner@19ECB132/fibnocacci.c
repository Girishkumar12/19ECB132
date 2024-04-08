#include <stdio.h>
#define N 4 // Macros

// Function to input elements of a matrix
void inputMatrix(int matrix[][N]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// This function returns 1 if A[][] and B[][] are equal
// otherwise it returns 0
int areSame(int A[][N], int B[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] != B[i][j])
                return 0;
        }
    }
    return 1;
}

// Driver code
int main() {

    // create two matrices
    int A[N][N], B[N][N];

    // Input elements for matrix A
    printf("For Matrix A:\n");
    inputMatrix(A);

    // Input elements for matrix B
    printf("For Matrix B:\n");
    inputMatrix(B);

    // Display first matrix
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nSecond Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Check if matrices are equal or not
    if (areSame(A, B))
        printf("\nMatrices are equal\n");
    else
        printf("\nMatrices are not equal\n");

    return 0;
}
