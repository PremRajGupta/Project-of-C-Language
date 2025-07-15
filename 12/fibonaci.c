// Write a program to print first N terms of a Fibonacci series.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, a = 0, b = 1, c = 0;
    printf("Enter Number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}