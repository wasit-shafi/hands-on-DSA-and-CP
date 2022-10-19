// Q8. You can easily print numbers from 1 to 100 using a loop, can you do the same without using any type of loop? 
#include<stdio.h>

void print(int n)
{
	if(n != 1)
		print(n-1);
	printf("%d\t", n);
}

int main()
{
	int n = 10;
	print(n);
	return 0;
}