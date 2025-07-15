// Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
#include <conio.h>

int aoc(float a)
{
    float pi = 3.14, t;
    t = pi * (a * a);
    return t;
}

int main()
{
    int r;
    float result;
    printf("Enter radius=");
    scanf("%d", &r);
    result = aoc(r);
    printf("Area of Circle=%.2f", result);

    return 0;
}
