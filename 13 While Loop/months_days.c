// Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;

    while (1)
    {
        printf("\nEnter month number (1 to 12) or 0 to exit: ");
        scanf("%d", &month);

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of Days: 31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of Days: 30\n");
            break;
        case 2:
            printf("Number of Days: 28/29 (depends on leap year)\n");
            break;
        case 0:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid option. Please select a correct option (1-12 or 0 to exit).\n");
            // break;
        }
    }

    return 0;
}
