// Q32. Write a C program to convert an integer into a string without using library function.
#include<stdio.h>

int main()
{
    char str[10];
    int i, n = 12345;
    int temp = n, len = 0;

    while(temp != 0) temp = temp / 10, len++;
    for(i = 0; i < len ; i++) str[len - i - 1] = n % 10 + '0'; n = n / 10;
    str[len] = '\0';

    printf("%s", str);
    return 0;
}