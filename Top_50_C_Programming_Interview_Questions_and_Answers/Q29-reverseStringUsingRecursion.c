// Q29. Write a C program to reverse a String in C with the help of recursion.
#include<stdio.h>
void reverseString(char str[])
{
    if(str[0]!='\0')
    {
        reverseString(str + 1);
        printf("%c",str[0]);
    }
}
int main()
{
    char str[] ="PrepBytes\0";
    reverseString(str);
    return 0;
}