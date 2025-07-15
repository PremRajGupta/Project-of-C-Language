// Write a recursive function to calculate sum of first N even natural numbers.

#include <stdio.h>
#include <conio.h>

int SumEven(int N)
{
    if (N == 0)
        return 0;
    return (2 * N) + SumEven(N - 1);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    int result = SumEven(num);
    printf("Sum of Even=%d", result);
}