// Q31. Write a C program to convert String into Integer without using library function.
#include<stdio.h>

int atoi(char *s)
{
    char *temp = s;
    int len = 0, num = 0;

    while(*temp++) len++;

    for(int i = 0 ; i < len ; i++)
        +num = num * 10 + s[i] - '0';

    return num;
}

int main()
{
    int n;
    char *str = "1235";

    printf("%d", atoi(str));
    return 0;
}