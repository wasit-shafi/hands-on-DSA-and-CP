// Q26. Write a C program to find the sum of two integers without using '+' operator.
#include<stdio.h>

int sum(int x, int y)
{
    //return -(x - y);
    // or
    return x - -y;
}

int main()
{
    int x, y;

    printf("x... ");
    scanf("%d", &x);
    
    printf("y... ");
    scanf("%d", &y);

    printf("sum(%d, %d) : %d", x, y, sum(x, y));
    return 0;
}