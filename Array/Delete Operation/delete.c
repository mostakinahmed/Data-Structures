#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 6, 8, 10}; 
    int size = 5; 

    int positionToDelete = 4; 

    // Shift elements to the left to overwrite the element at the specified position
    for (int i = positionToDelete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
// Decrement the size of the array to reflect the deletion
    size--;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}