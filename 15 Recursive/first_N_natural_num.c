// Write a recursive function to print first N natural numbers

#include <stdio.h>
#include <conio.h>

int natural(int n)
{
    int s;
    if (n == 0)
        return 1;
    natural(n - 1);
    printf("%d", n);
}

int main()
{
    int k;
    natural(5);
    // printf("%d", k);
}