// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, arr[10], sum = 0, sum1 = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d Elements=", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            sum = sum + arr[i];
        else
            sum1 = sum1 + arr[i];
    }
    printf("Total sum of Even number=%d\n", sum);
    printf("Total sum of Odd number=%d", sum1);
}