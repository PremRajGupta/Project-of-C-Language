// Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>
#include <conio.h>

int grea(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int i, num;
    printf("Enter size of Array=");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        printf("Enter %d Elements=", i + 1);
        scanf("%d", &arr[i]);
    }
    int result = grea(arr, num);
    printf("Greatest Number is=%d", result);
}