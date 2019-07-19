//
//
//
//
//
#include<iostream>
using namespace std;

int main()
{
    int n, i, prefixSum = 0;
    int *arr, *prefixSumArr;
   
    cout << endl << "Enter no of elements : ";
    cin >> n;

    arr = new int[n];
    prefixSumArr = new int[n];
    
    for(i = 0 ; i < n ; i++)
    {
      cout << endl << "Array[" << i + 1 << "] << ";
      cin >> arr[i];
      prefixSum += arr[i];
      prefixSumArr[i] = prefixSum;
    }
    
    cout << endl << "Array elements are as : ";
    for(i = 0 ; i < n ; i++) cout << arr[i] << " ";
    
    cout << endl << "Prefix sum of array elements are as : ";
    for(i = 0 ; i < n ; i++) cout << prefixSumArr[i] << " ";

    return 0;
}