// Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
#include <conio.h>

void odd(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
            printf("%d\t", i);
    }
}

int main()
{
    int N, num;
    printf("Enter Number=");
    scanf("%d", &N);
    num = N * 2;
    odd(num);
}