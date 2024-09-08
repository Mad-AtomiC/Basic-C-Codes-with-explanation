//Here we will take input for array and will sort them with bubble sort
#include <stdio.h>
int main() {
    int size;
    int j, i;
    printf("Enter The Array Size:\n");
    scanf("%d", &size);//Here we will input the array size we want.
    int arr[size];
    printf("Enter The Array Elements:\n");
     for(int i=0; i < size; i++)//In this loop we will enter the elements that we want.
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The sorted array is:\n");//here the code will print sorted array that user entered previously.
    for(int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
