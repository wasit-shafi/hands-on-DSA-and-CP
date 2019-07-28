//
//jaggedArrays.cpp
//
//program to implement jagged arrays in c++
//
#include<iostream>
#include<iomanip>
#include<vector>
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

    vector<vector<int> >jaggedArray;
    
    cout << endl;
    for(i = 0 ; i < rows ; i++)
    {
        vector<int> arr;
        int data;

        for ( j = 0 ; j < columnsSizeOfEachRow[i] ;j++)
        {
            cout << "Array[" << i + 1 << "][" << j + 1 << "] << ";
            cin >> data;
            arr.push_back(data);
        }
        jaggedArray.push_back(arr);
        cout << endl;
    }
    
    cout << endl << endl << "Jagged array is as follows : " << endl;
    for( i = 0 ; i < jaggedArray.size() ; i++)
    {
        for ( j = 0 ; j < jaggedArray[i].size() ;j++)
            cout << setw(3) << jaggedArray[i][j] << " ";
        cout << endl;
    }    

    return 0;
}