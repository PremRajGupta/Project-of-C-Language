// Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>
#include <conio.h>

int prime(int n)
{
    int i, flag = 1;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            flag = 0;
        break;
    }
    return flag;
}

int main()
{
    int x, flag = 1;
    printf("Enter Number=");
    scanf("%d", &x);
    int result = prime(x);
    if (flag == result)
        printf("Prime Numebr");
    else
        printf("Not Prime");
}