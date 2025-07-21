// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter a String=");
    fgets(str, 20, stdin);
    // scanf("%[^\n]s", str);

    char ch;
    int i = 0, count = 0;
    printf("Enter a character to count:");
    scanf("%c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;
        i++;
    }
    printf("The character '%c' occurs %d times in the string.\n", ch, count);
    return 0;
}