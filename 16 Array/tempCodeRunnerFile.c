#include <stdio.h>

int main()
{
    int i, j, k, matrix1[3][3], matrix2[3][3], product[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter %d %d Array of Elements=", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter %d %d Array of Elements=", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
            product[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}