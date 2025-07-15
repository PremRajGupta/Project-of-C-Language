// Write a program to calculate HCF of two numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2;
    printf("Enter two number=");
    scanf("%d%d", &n1, &n2);
    int H = n1 < n2 ? n1 : n2;
    for (H; H <= 1; H--)
    {
        if (n1 % H == 0 && n2 % H == 0)
            break;
    }
    printf("HCF=%d", H);

    return 0;
}