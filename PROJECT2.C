#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count occurrences of each bird type
    int count[6] = {0}; // Initialize count array with zeros

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Find the most frequent bird type
    int maxCount = 0;
    int mostFrequentBird = 1; // Initialize with the first bird type

    for (int i = 1; i <= 5; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentBird = i;
        }
    }

    // Output the result
    printf("%d\n", mostFrequentBird);

    return 0;
}
