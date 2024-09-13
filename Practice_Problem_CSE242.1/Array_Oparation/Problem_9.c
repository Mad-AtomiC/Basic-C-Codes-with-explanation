// Declare an Array, take Size, Elements dynamically.
// Delete an element in any of the Odd index position.
// [Take the positiondynamically]
#include <stdio.h>
int main()
{
    int size, position;
    printf("Enter The Array Size:\n");
    scanf("%d", &size);//Here we will input the array size we want.
    int arr[size];
    printf("Enter The Array Elements:\n");
     for(int i=0; i < size; i++)//In this loop we will enter the elements that we want.
    {
        scanf("%d", &arr[i]);
    }
    for (;;)
    { // Infinite loop to repeatedly ask for valid input
        printf("Enter the odd position:");
        scanf("%d", &position);

        // Validate the position
        if (position == 0 || position % 2 == 0 || position > size) {
            printf("Invalid input. Please enter an odd position:\n");
        }
        else
        {
            break; // If valid input, exit the loop
        }
    }
    for (int i = position-1; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    
    printf("The array is:\n");//here the code will print sorted array that user entered previously.
    for(int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}