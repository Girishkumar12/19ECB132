#include <stdio.h>

// Function to insert an element at a specified index in the array
void insertElement(int arr[], int size, int index, int element) {
    // Check if the index is valid
    if (index >= 0 && index <= size) {
        // Shift elements to make space for the new element
        for (int i = size - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        // Insert the new element at the specified index
        arr[index] = element;
        // Increase the size of the array
        size++;
        // Print the updated array
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid index for insertion.");
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // Insert 10 at index 2
    insertElement(arr, size, 2, 10);

    return 0;
}