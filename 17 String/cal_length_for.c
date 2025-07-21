// Write a program to calculate the length of the string. (without using builtin method)
// using for loop

#include <stdio.h>

int main()
{
    char str[10] = "hello prem";
    int i;
    for (i = 0; str[i]; i++)
        ;
    printf("Length is %d", i);
}