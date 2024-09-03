//Write a program to take as input 5 numbers from the user and store them in an array
#include <stdio.h>
int main()
{
    int i;
    int a[5];//giving a static array size, in this case '5' is the size and "a" is the variable for the array.
    printf("Enter the numbers:\n");
    for(i=0; i<5; i++)//this loop is for taking input from user.
    {
        scanf("%d", &a[i]);
    }
    printf("You entered:");
    for (i=0; i<5; i++)//this loop will print the numbers inputed by the user.
    {
        printf("%d ", a[i]);
    }
return 0;
}