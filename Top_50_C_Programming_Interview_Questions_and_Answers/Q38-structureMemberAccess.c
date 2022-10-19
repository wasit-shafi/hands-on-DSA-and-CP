// Q38. What are the different ways to access structure members in C? 
#include<stdio.h>

struct point{
    int x;
    int y;
};

int main()
{
    struct point s;
    struct point *ptr = &s;

    s.x = 10;
    ptr-> y = 20;

    printf("x : %d\ny : %d", (*ptr).x, s.y); // *ptr.x error
    return 0;
}