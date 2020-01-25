// Do give it a read how atlast it solution trunout to be in just O(n) from O(n^3)=>O(n^2)=>O(n.log(n))=>O(n) Refer : https://en.wikipedia.org/wiki/Maximum_subarray_problem
#include<iostream>
#include<algorithm>
using namespace std;

int algorithm_n3(int arr[], int n)
{
	int sum, maxsum;

	maxsum = arr[0];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i ; j < n; j++)
		{
			sum = 0;
			for(int k = i; k <= j; k++) sum += arr[k];
			if(sum > maxsum) maxsum = sum;
		}
	}
	return maxsum;
}

int algorithm_n2(int arr[], int n)
{
	int sum, maxsum;

	maxsum = arr[0];
	for(int i = 0 ; i < n ; i++)
	{
		sum = 0;
		for(int j = i ; j < n; j++)
		{
			sum += arr[j];
			if(sum > maxsum) maxsum = sum;
		}
	}
	return maxsum;
}

int algorithm_n(int arr[], int n)
{
	int sum, maxsum;

	sum = 0;
	maxsum = arr[0];
	for(int i = 0 ; i < n ; i++)
	{
		sum = max(arr[i], arr[i] + sum);
	  	maxsum = max(sum, maxsum);
	}
	return maxsum;
}

int main()
{
	int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2}, n;
	n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Array Elements are as : "; for(int i = 0 ; i < n ; i++) cout << arr[i] << "  ";

	cout << "\n\nMax subarray sum : " << algorithm_n3(arr, n);
	cout << "\nMax subarray sum : " << algorithm_n2(arr, n);
	cout << "\nMax subarray sum : " << algorithm_n(arr, n);
	cout << "\n";
	return 0;
}