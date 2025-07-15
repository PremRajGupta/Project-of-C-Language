// Write a recursive function to calculate factorial of a given number

#include <stdio.h>
#include <conio.h>

int fact(int N)
{
    if (N == 1)
        return 1;
    return N * fact(N - 1);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    int result = fact(num);
    printf("Factorial=%d", result);
}