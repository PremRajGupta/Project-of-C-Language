/*Write a menu driven program with the following options:
    a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle or not
    d. Exit
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num, a, b, c;
    while (1)
    {
        printf("\n Press 1. Check isosceles triangle or Not");
        printf("\n Press 2. Check lengths of right angled triangle or Not");
        printf("\n Press 3. Check equilateral triangle or Not");
        printf("\n Press 4. Exit to Programs");
        printf("\n Choose Option=");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf(" Welcome to Isosceles triangle.\n");
            // int a, b, c;
            printf("\n Enter Side1 Number=");
            scanf("%d", &a);
            printf("\n Enter Side2 Number=");
            scanf("%d", &b);
            printf("\n Enter Side3 Number=");
            scanf("%d", &c);
            if (a == b || b == c || c == a)
                printf("\n It is Isosceles triangle");
            else
                printf("\n Not Idosceles trangle");
            break;
        case 2:
            printf(" Welcome to right angled or Not.\n");
            // int a, b, c;
            printf("\n Enter Side1 Number=");
            scanf("%d", &a);
            printf("\n Enter Side2 Number=");
            scanf("%d", &b);
            printf("\n Enter Side3 Number=");
            scanf("%d", &c);
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
                printf("\n It is right angle triangle");
            else
                printf("\n It is Not right angle triangle");
            break;
        case 3:
            printf(" Welcome to equilatera triangle or Not.\n");
            // int a, b, c;
            printf("\n Enter Side1 Number=");
            scanf("%d", &a);
            printf("\n Enter Side2 Number=");
            scanf("%d", &b);
            printf("\n Enter Side3 Number=");
            scanf("%d", &c);
            if (a == b && b == c)
                printf("\n It is Equilateral Traingle");
            else
                printf("\n Not a Equilatera triangle");
            break;
        case 4:
            printf(" Exit the program.\n");
            exit(0);

        default:
            printf("\nInvalid Options Choose Right Options\n");
            break;
        }
    }
    return 0;
}