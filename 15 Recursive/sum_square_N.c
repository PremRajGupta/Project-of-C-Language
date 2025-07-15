// Write a recursive function to calculate sum of squares of first n natural numbers.

#include <stdio.h>
#include <conio.h>

int SumSquare(int N)
{
    if (N == 1)
        return 1;
    return (N * N) + SumSquare(N - 1);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    int result = SumSquare(num);
    printf("Sum of Square=%d", result);
}