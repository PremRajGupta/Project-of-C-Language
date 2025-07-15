// Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>
#include <conio.h>

int sum(int N)
{
    // int s = 0;
    if (N == 1)
        return 1;
    return N + sum(N - 1);
    // return s;
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    int result = sum(num);
    printf("%d", result);
}