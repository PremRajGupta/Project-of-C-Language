// Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
#include <conio.h>

int nextprime(int n)
{
    int i;
    while (1)
    {
        n = n + 1;
        int flag = 1;
        for (i = 2; i < n - 1; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            return n;
    }
}

int main()
{
    int x;
    printf("Enter Number=");
    scanf("%d", &x);
    printf("Next Prime=%d", nextprime(x));
}