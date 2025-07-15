// Write a function to print first N odd natural numbers

#include <stdio.h>
#include <conio.h>

int odd(int N)
{
    int i;
    for (i = 1; i <= N * 2; i++)
    {
        printf("%d\t", i);
        i += 1;
    }
}
int main()
{
    int n;
    printf("Enter number=");
    scanf("%d", &n);
    odd(n);
}
