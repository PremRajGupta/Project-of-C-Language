// Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, arr[3], sum = 0;
    float avg;
    for (i = 0; i < 3; i++)
    {
        printf("Enter %d Number=", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        avg = sum / 3.0;
    }
    printf("Average of Numbers=%.2f", avg);
}