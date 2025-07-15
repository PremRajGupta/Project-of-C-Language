// Write a program in C to find the transpose of a given matrix.

#include <stdio.h>

int main()
{
    int i, j, tran[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter %d %d Array of elements=", i + 1, j + 1);
            scanf("%d", &tran[i][j]);
        }
    }
    printf("Before Transpose Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", tran[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter Transpose Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", tran[j][i]);
        }
        printf("\n");
    }
    return 0;
}