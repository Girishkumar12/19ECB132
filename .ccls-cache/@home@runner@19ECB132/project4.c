#include<stdio.h>

int main() {
    int n, i, j, arr[1000][1000], sum1 = 0, sum2 = 0, result, finalresult;

    // Input the value of n
    scanf("%d", &n);

    // Input the matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);

            // Sum the diagonal elements
            if (i == j) {
                sum1 = sum1 + arr[i][j];
            }

            // Sum the anti-diagonal elements
            if (i + j == n - 1) {
                sum2 = sum2 + arr[i][j];
            }
        }
    }

    // Calculate the absolute difference of sums
    result = sum1 - sum2;

    // Print the absolute result
    if (result < 0) {
        finalresult = -result;
        printf("%d", finalresult);
    } else {
        printf("%d", result);
    }

    return 0;
}
