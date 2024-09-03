//Write a program to take as input 5 numbers from the user and store them in an array
#include <stdio.h>
int main()
{
    int i;
    int a[5];
    printf("Enter the numbers:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("You entered:");
    for (i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
return 0;
}