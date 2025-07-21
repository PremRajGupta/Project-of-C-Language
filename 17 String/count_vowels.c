// Write a program to count vowels in a given string.

#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a String=");
    fgets(str, 20, stdin);

    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        i++;
    }
    printf("Volew of That String=%d", count);
    return 0;
}