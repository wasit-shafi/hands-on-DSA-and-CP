//
//
//
//
//
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int noOfShifts, index;

    cout << endl << "Array elements are as : ";
    for(int i = 0 ; i < (sizeof(arr)/sizeof(int)); i++) cout << arr[i] << "  ";

    cout << "Total no elements in array : " << sizeof(arr)/sizeof(arr[0]);
    cout << endl << "\nEnter no of shifts : ";
    cin >> noOfShifts;
    if(noOfShifts == 0 || noOfShifts == (sizeof(arr)/sizeof(arr[0])) ) 
     index = 0;
    else
    {
        if (noOfShifts < (sizeof(arr)/sizeof(arr[0])) )
        index = (sizeof(arr)/sizeof(arr[0])) - noOfShifts;
        else
        {
        index = noOfShifts % (sizeof(arr)/sizeof(arr[0]));
        index = sizeof(arr)/sizeof(arr[0]) - noOfShifts;
        }
    }
    cout << index;
    return 0;
}