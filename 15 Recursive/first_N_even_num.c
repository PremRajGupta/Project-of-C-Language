// Write a recursive function to print first N even natural numbers

#include <stdio.h>
#include <conio.h>

int even(int N)
{
    if (N == 0)
        return 1;
    even(N - 1);
    printf("%d\t", 2 * N);
}
int main()
{
    int num;
    printf("Enter Number=");
    scanf("%d", &num);
    even(num);
}