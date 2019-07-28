//
//jaggedArrays.cpp
//
//program to implement jagged arrays in c++
//
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int rows, i, j;
    cout << endl << "Enter no of rows : ";
    cin >> rows;

    int columnsSizeOfEachRow[rows];

    cout << endl;
    for( i = 0 ; i < rows ; i++ )
    {
        cout << "Enter column size for row no " << i + 1 << " : ";
        cin >> columnsSizeOfEachRow[i];
    }
    
    int *jaggedArray[rows];
    for (i = 0 ; i < rows ; i++)
        jaggedArray[i] = new int[columnsSizeOfEachRow[i]];
    
    cout << endl;
    for(i = 0 ; i < rows ; i++)
    {
        for ( j = 0 ; j < columnsSizeOfEachRow[i] ;j++)
        {
            cout << "Array[" << i + 1 << "][" << j + 1 << "] << ";
            cin >> jaggedArray[i][j];
        }
        cout << endl;
    }

    cout << endl << endl << "Jagged array is as follows : " << endl;
    for( i = 0 ; i < rows ; i++)
    {
        for ( j = 0 ; j < columnsSizeOfEachRow[i] ;j++)
            cout << setw(3) <<jaggedArray[i][j] << " ";
        cout << endl;
    }    

    return 0;
}