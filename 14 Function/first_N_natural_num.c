// Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
#include <conio.h>

void Nnatural(int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

int main()
{
    int N;
    printf("Enter Number=");
    scanf("%d", &N);

    Nnatural(N);
    return 0;
}