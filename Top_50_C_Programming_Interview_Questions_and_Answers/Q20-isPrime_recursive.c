// Q20. Write a program to check whether the number is prime or not using recursion.
#include<stdio.h>

int isPrime(int n, int i)
{
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % i == 0) return 0;
	if(i * i > n) return 1;
	return(isPrime(n, i + 1));
}

int main()
{
	int n;

	printf("Enter number : ");
	scanf("%d", &n);

	if(isPrime(n, 2))
		printf("Prime Number.");
	else
		printf("Not a prime number.");
	return 0;
}