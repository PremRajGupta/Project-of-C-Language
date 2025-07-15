// Write a function to calculate the factorial of a number.(TSRS)

#include <stdio.h>
#include <conio.h>

int factorial(int N)
{
    int f = 1;
    for (int i = 1; i <= N; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int fact;
    printf("Enter Number=");
    scanf("%d", &fact);

    printf("Factorial=%d", factorial(fact));
    return 0;
}