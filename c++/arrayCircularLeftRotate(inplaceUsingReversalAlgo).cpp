//
//arrayCircularLeftRotate.cpp on 18-06-18
//
//program to implement circular left rotation operation on vector
//for more info refer :https://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/

#include<iostream>
#include<stdlib.h>
using namespace std;

void getArray(int array[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "Array[" << i + 1 << "] = ";
        cin >> array[i];
    }
}

void showArray(int array[], int n)
{
    for(int i = 0 ; i < n; i++)
        cout << array[i] << "  ";
}

void reverseArray(int array[], int start, int end)
{
	while(start < end)
    {
        int temp;
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

void throwException(char* msg)
{
    cout << endl << msg;
    exit(EXIT_FAILURE);
}

int main()
{
    int *array, n, shifts;

    cout << endl << "Enter length of array : ";
    cin >> n;
    array = new int[n];

    getArray(array, n);
    cout << endl << "Array element are as  : ";
    showArray(array, n);

    cout << endl << "Enter no of left shifts : ";
    cin >> shifts;

    if(shifts < 0 || shifts > n)
     throwException("Invalid no of shifts...!");
    if (shifts != 0 && shifts != n)
    {
        reverseArray(array, 0, shifts - 1);
        reverseArray(array, shifts, n - 1);
        reverseArray(array, 0, n - 1);
    }

    cout << endl << "Array elements after " << shifts << " shifts are as : ";
    showArray(array, n);

    return 0;
}
