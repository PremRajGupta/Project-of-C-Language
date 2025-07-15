// Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
#include <conio.h>

int LCM(int a, int b)
{
    int L;
    for (L = 1; L <= a * b; L++)
    {
        if (L % a == 0 && L % b == 0)
            break;
    }
    return L;
}

int main()
{
    int x, y;
    printf("Enter Two number=");
    scanf("%d%d", &x, &y);

    int result = LCM(x, y);
    printf("LCM is = %d", result);
    return 0;
}