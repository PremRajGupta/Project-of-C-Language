// Write a program to calculate the length of the string. (without using builtin method)
// using while loop

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";

    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    // both are same output
    printf("Length of String=%d", count);
    // printf("Length of String=%d", i);
}