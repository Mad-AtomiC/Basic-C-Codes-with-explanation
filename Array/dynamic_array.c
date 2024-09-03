//Here we will dynamically take input for array size.
#include <stdio.h>
int main() {
    int size;
    printf("Enter The Array Size:\n");
    scanf("%d", &size);//Here we will input the array size we want.
    int arr[size];
    printf("Enter The Array Elements:\n");
    for(int p=0; p<size; p++)//In this loop we will enter the elements that we want.
    {
        scanf("%d", &arr[p]);
    }
    printf("The sorted array is:\n");//here the code will print the elements as array that user entered previously.
    for(int p=0; p<size; p++)
    {
        printf("%d ", arr[p]);
    }
    return 0;
}
