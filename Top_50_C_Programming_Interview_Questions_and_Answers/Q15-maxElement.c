// Q15.Find maximum in an Array
#include<stdio.h>

int max(int x, int y)
{
	if(x >= y)
		return x;
	else
		return y;
}

int recursive_max(int arr[], int n)
{
	if(n == 1)
		return arr[0];
	return max(recursive_max(arr, n-1), arr[n - 1]);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 55, 6, 77, 88, 99, 0, 1, 2, 3, 3, 4, 5};

	printf("MaxElement : %d", recursive_max(arr, sizeof(arr)/sizeof(arr[0])));
	return 0;
}