// Write a recursive function to print first N odd natural numbers.

#include <stdio.h>
#include <conio.h>

void odd(int N)
{
    if (N == 0)
        return;

    odd(N - 1);
    printf("%d\t", 2 * N - 1);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    odd(num);
}