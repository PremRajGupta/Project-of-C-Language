// Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>
#include <conio.h>

int revOdd(int N)
{
    if (N == 0)
        return 1;
    printf("%d\t", 2 * N - 1);
    revOdd(N - 1);
}

int main()
{
    int num;
    printf("Enter number=");
    scanf("%d", &num);
    revOdd(num);
}