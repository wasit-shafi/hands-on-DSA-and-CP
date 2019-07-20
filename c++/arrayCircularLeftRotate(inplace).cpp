//
//arrayCircularLeftRotate.cpp on 18-06-18
//
//program to implement circular left rotation operation on vector

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

void rotateCircularLeft(int array[], int n, int shifts) // other way is to rotatate one by one 'shift' times array
{
    int temp[shifts];
    int i, j;

    for(i = 0 ; i < shifts ; i++)
        temp[i] = array[i];

    for(i = shifts, j = 0 ; i < n ; i++, j++)
        array[j] = array[i];

    for(i = n - shifts, j = 0 ; j < shifts ; i++, j++)
        array[i] = temp[j];
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
     rotateCircularLeft(array, n, shifts);

    cout << endl << "Array elements after " << shifts << " shifts are as : ";
    showArray(array, n);

    return 0;
}
