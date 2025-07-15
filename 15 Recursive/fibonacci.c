// Write a recursive function to find the nth term of Fibonacci series.

#include <stdio.h>
#include <conio.h>

int fibo(int N)
{
    if (N == 0)
        return 0;
    else if (N == 1)
        return 1;
    return fibo(N - 1) + fibo(N - 2);
}

int main()
{
    int num;
    printf("Enter number=");
    scanf("%d", &num);
    int result = fibo(num);
    printf("Fibonacci=%d", result);
}