// Write a function to check whether a given number is even or odd.
// Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>
#include <conio.h>

int EvenOdd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    printf("Enter number=");
    scanf("%d", &number);
    printf("%d", EvenOdd(number));
    return 0;
}
