// Q8. You can easily print numbers from 1 to 100 using a loop, can you do the same without using any type of loop? 
#include<stdio.h>
#define UPPERLIMIT 10

void print(int n)
{
	printf("%d\t", n);
	if(n != UPPERLIMIT)
		print(n + 1);
}

int main()
{
	print(1);
	return 0;
}