// Write a function to calculate simple interest. (TSRS)

#include <stdio.h>
#include <conio.h>

int si(int a, int b, int c)
{
    int r = a * b * c / 100;
    return r;
}

int main()
{
    int p, t, r;
    printf("Enter Principle Value=");
    scanf("%d", &p);
    printf("Enter Rate Value=");
    scanf("%d", &r);
    printf("\n Enter Time(year) Number=");
    scanf("%d", &t);

    printf("simple interest=%d", si(p, r, t));
    return 0;
}