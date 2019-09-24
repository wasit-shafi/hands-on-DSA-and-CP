// Problem : The Sorting problem was to sort array elements accoding to their last digit in O(n) time complexity inorder to acheive that we use bucket sort

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void getArray(int arr[], int n)
{
    for(int i = 0 ; i <= n ; i++)
    {
        cout << "Arr[" << i + 1 << "] << ";
        cin >> arr[i] ;
    }
}

void printArray(int arr[], int n)
{
    for( int i = 0 ; i <= n ; i++)
        cout << arr[i] << "  ";
}

vector<vector<int>> bucketSort(int arr[], int n)
{    
    vector<vector<int>> buckets;
    vector<int> b;
    int bucketIndex;
    
    // initilize buckets
    for( int i = 0 ; i < 10 ; i++)
    {
        vector<int> b(1,INT_MIN); // INT_MIN  refer that particular bucket is empty
        buckets.push_back(b); 
    }

    for(int i = 0 ; i < n ; i++) // CTM: O(n) time complexity
    {
       bucketIndex = arr[i] % 10; // get last digit
       if(buckets[bucketIndex][0] == INT_MIN)
           buckets[bucketIndex][0] = arr[i];
       else
           buckets[bucketIndex].push_back(arr[i]);
    }

    return buckets;
}

void printBuckets(vector<vector<int>> buckets)
{
    for( int i = 0 ; i < buckets.size() ; i++)
    {
        if( buckets[i][0] != INT_MIN )
            for( int j = 0 ; j < buckets[i].size() ; j++)
                cout << buckets[i][j] << " ";
    }
}

int main()
{
    int *arr, n;
    vector <vector<int>> buckets;

    cout << "Enter no of elements : ";
    cin >> n;

    arr = new int[n];
    getArray(arr, n - 1);
    cout << endl << "Array elements are as : ";    
    printArray(arr, n - 1);

    buckets = bucketSort(arr, n);
    cout << endl << endl << "Sorted elements according to their Most Significant Digit : ";
    printBuckets(buckets);

    return 0;
}