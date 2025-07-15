// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>
#include <conio.h>

int rev(int n)
{
    if (n == 0)
        return 1;
    printf("%d", n);
    rev(n - 1);
}

int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    rev(num);
}