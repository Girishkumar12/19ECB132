#include <stdio.h>

int main() {
    int arr[100], rev[100], i, n, j = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        rev[j] = arr[i];
        j++;
    }

    printf("The elements after reversing are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}