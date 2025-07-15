// Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
#include <conio.h>

int HCF(int a, int b)
{
    int H;
    for (H = a < b ? a : b; H >= 1; H--)
    {
        if (a % H == 0 && b % H == 0)
            break;
    }
    return H;
}

int main()
{
    int x, y;
    printf("Enter Two Number=");
    scanf("%d%d", &x, &y);

    int Result = HCF(x, y);
    printf("HCF=%d", Result);
    return 0;
}