// Declare an Array, take Size, Elements dynamically. Insert an
// element in any of the Even index position except 0th index.
// [Take the position dynamically]
#include <stdio.h>
int main()
{
    int size, position, newelement;
    printf("Enter The Array Size:\n");
    scanf("%d", &size);//Here we will input the array size we want.
    int arr[size+1];
    printf("Enter The Array Elements:\n");
     for(int i=0; i < size; i++)//In this loop we will enter the elements that we want.
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Even Position Number:\n");
    scanf("%d", &position);
    if (position > 0 || position % 2 = 0 || position >= size)
    {
        printf("Enter the nev element:\n");
        scanf("%d", &newelement);
    }
    
    printf("The array is:\n");//here the code will print sorted array that user entered previously.
    for(int i=0; i < size+1; i++)
    {
        printf("%d ", arr[i]);
    }
}