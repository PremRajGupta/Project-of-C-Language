// Write a function to print first N natural numbers in reverse order

#include <stdio.h>
#include <conio.h>

void rev(int n)
{
    int i, s = 0;
    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
}
int main()
{
    int N;
    printf("Enter Number=");
    scanf("%d", &N);
    rev(N);
    return 0;
}