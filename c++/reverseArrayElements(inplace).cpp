//
//reverseArrayElements(inplace).cpp on 18-05- 19
//
//program to reverse all array elements without using additional array

#include<iostream>
using namespace std;

void getArray(int array[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "Array[" << i + 1 << "] = ";
        cin >> array[i];
    }
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
void showArray(int array[], int n)
{
	for(int i = 0 ; i < n; i++)
    cout << array[i] << "  ";
}
int main()
{
    int *array, n;

    cout << endl << "Enter no of elements : ";
    cin >> n;
    array = new int[n];

	cout << endl << "Enter array elements : \n";
    getArray(array, n);

    cout << endl << "Array elements before reversing elements are as : ";
    showArray(array, n);

	reverseArray(array, 0, n - 1);
    cout << endl << "Array elements after reversing elements are as : ";
    showArray(array, n);

    return 0;
}
