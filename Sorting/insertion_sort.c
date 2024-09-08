#include <stdio.h>

int main() {
    int size;
    printf("Enter The Array Size:\n");
    scanf("%d", &size); // Input the array size.
    int arr[size];
    printf("Enter The Array Elements:\n");
    for (int i = 0; i < size; i++) { // Input the array elements.
        scanf("%d", &arr[i]);
    }

    // Insertion Sort Algorithm
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("The sorted array is:\n"); // Print the sorted array.
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
