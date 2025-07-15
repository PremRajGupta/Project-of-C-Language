// Write a function to sort an array of any size. (TSRS)

#include <stdio.h>

void sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, num;
    printf("Enter Size of array=");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        printf("Enter %d Array of Elements=", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr, num);
    printf("After Sorting");
    for (i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}