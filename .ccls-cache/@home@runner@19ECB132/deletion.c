#include <stdio.h>

// Function to delete an element at a specified index in the array
void deleteElement(int arr[], int size, int index) {
    // Check if the index is valid
    if (index >= 0 && index < size) {
        // Shift elements to fill the gap created by the deleted element
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        // Decrease the size of the array
        size--;
        // Print the updated array
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid index for deletion.");
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // Delete element at index 2
    deleteElement(arr, size, 2);

    return 0;
}