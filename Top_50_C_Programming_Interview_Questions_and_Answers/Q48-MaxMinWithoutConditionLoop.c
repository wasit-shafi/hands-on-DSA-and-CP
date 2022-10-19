// Q48. Find the maximum & minimum of two numbers in a single line without using any condition & loop.

#include<stdio.h>
#include<stdlib.h>

int getAbsoluteValue(int n)
{
    if(n > 0) 
        return n;
    else
        return -n; 
}
int main()
{
    int x, y;

    printf("x... ");
    scanf("%d", &x);
    
    printf("y... ");
    scanf("%d", &y);

    printf("\nMAX : %d\nMIN : %d", ((x + y) + abs(x - y))/2, ((x + y) - abs(x - y))/2);
    printf("\n\nMAX : %d\nMIN : %d", ((x + y) + getAbsoluteValue(x - y))/2, ((x + y) - getAbsoluteValue(x - y))/2);
    return 0;
}