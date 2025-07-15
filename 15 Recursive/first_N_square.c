// Write a recursive function to print squares of first N natural numbers

#include <stdio.h>
#include <conio.h>

int squ(int N)
{
    if (N == 0)
        return 1;
    squ(N - 1);
    printf("%d\t", N * N);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    squ(num);
}