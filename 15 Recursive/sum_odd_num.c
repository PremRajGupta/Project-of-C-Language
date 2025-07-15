// Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>
#include <conio.h>

int SumOdd(int N)
{
    int odd;
    if (N == 1)
        return 1;
    return (2 * N - 1) + SumOdd(N - 1);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    int result = SumOdd(num);
    printf("%d", result);
}