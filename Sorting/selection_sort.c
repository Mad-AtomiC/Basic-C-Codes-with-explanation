#include <stdio.h>

int main() {
    int size;
    int j, i;
    printf("Enter The Array Size:\n");
    scanf("%d", &size); // Input the array size.
    int arr[size];
    printf("Enter The Array Elements:\n");
    for(int i = 0; i < size; i++) { // Input the array elements.
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i; // Assume the current element is the minimum.
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) { // Find the smallest element.
                minIndex = j;
            }
        }
        // Swap the found minimum element with the current element.
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("The sorted array is:\n"); // Print the sorted array.
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
