#include <stdio.h>

int divisiblePairsCount(int n, int k, int ar[]) {
    int remainderCounts[k];
    for (int i = 0; i < k; i++) {
        remainderCounts[i] = 0;
    }

    int count = 0;

    // Count remainders of each element when divided by k
    for (int i = 0; i < n; i++) {
        int remainder = ar[i] % k;
        remainderCounts[remainder]++;
    }

    // Count pairs with remainder i and remainder k-i (except when i = 0)
    for (int i = 1; i <= k / 2; i++) {
        count += remainderCounts[i] * remainderCounts[k - i];
    }

    // Special case when remainder is 0, count pairs with remainder 0
    count += (remainderCounts[0] * (remainderCounts[0] - 1)) / 2;

    return count;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Calculate and print the result
    int result = divisiblePairsCount(n, k, ar);
    printf("%d\n", result);

    return 0;
}
