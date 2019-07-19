//
//
//
//
//
#include<iostream>
using namespace std;

void Print(int *arr, int n)
{
    for(int i = 0 ; i < n ; i++) cout << arr[i] << "  ";
}

int main()
{
    int n, i;
    int *arr;
   
    cout << endl << "Enter no of elements : ";
    cin >> n;

    arr = new int[n];
    
    for(i = 0 ; i < n ; i++)
    {
      cout << "Array[" << i + 1 << "] << ";
      cin >> arr[i];
    }
    cout << endl << "Array elements are as : ";
    Print(arr, n);

    for(i = 1 ; i < n ; i++) arr[i] = arr[i] + arr[i - 1];

    cout << endl << "Prefix sum of array elements are as : ";
    Print(arr, n);
    
    return 0;
}