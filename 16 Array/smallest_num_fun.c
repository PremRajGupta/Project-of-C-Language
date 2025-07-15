// Write a function to find the smallest number from the given array of any size. (TSRS)

#include <stdio.h>

int FindSmall(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int i, num;
    printf("Enter Size of Array=");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        printf("Enter %d Array Elements=", i + 1);
        scanf("%d", &arr[i]);
    }

    int result = FindSmall(arr, num);
    printf("Smallest Number is=%d", result);
}