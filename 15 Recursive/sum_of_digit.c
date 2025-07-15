// Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>
#include <conio.h>

int SumofDigit(int N)
{
    if (N == 0)
        return 0;
    return (N % 10) + SumofDigit(N / 10);
}
int main()
{
    int num;
    printf("Enter digit number=");
    scanf("%d", &num);
    int result = SumofDigit(num);
    printf("Sum of Digit=%d", result);
}