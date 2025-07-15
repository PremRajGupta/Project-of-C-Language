// Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, arr[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d Elements=", i + 1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Smallest Number=%d", min);
}