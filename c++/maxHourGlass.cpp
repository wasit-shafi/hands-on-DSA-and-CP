//
//
//
//
//
//#include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

void getDimensions(int &rows, int &cols)
{
    do{
        cout << endl << "Enter no of rows [HINT : rows >= 3]: ";
        cin >> rows;
        cout << endl << "Enter no of columns [HINT : cols >= 3]: ";
        cin >> cols;
        if(rows < 3 || cols < 3) cout << endl << "Invalid Matrix Dimensions...! Try Again.";
    }while(rows < 3 || cols < 3); 
}
/* 
void getMatrix(int rows, int cols, int arr[rows][cols])
{
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; i < cols ; j++)
        {
             cout << "Arr[" << i + 1 << "][" << j + 1 << "] = ";
             cin >> arr[i][j];
        }
        cout << endl;
    }
}

void putMatrix(int rows, int cols, int arr[rows][cols])
{
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; i < cols ; j++)
            cout << arr[i][j] << " ";
     cout << endl; 
    }
}
*/

int main()
{
    int rows, cols;
    int i, j;
    int rIndex, cIndex; // they will point to top left point of hourGlass having max sum
    int maxHourGlassSum = INT_MIN, hourGlassSum;

    getDimensions(rows, cols);
    int arr[rows][cols];
   
    cout << endl << "Enter matrix elements : " << endl;
    for(i = 0 ; i < rows ; i++)
    {
        for(j = 0 ; j < cols ; j++)
        {
             cout << "Arr[" << i + 1 << "][" << j + 1 << "] = ";
             cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << endl << "Matrix is as follows" << endl;
    for(i = 0 ; i < rows ; i++)
    {
        for(j = 0 ; j < cols ; j++)
            cout << arr[i][j] << " ";
     cout << endl; 
    }
    // computing maxHourGlass value
    for(i = 0 ; i < rows ; i++)
    {
        for (j = 0 ; j < cols ; j++)
        {
            if(i  < rows - 2 && j < cols -2)
            {
                 hourGlassSum = arr[i][j] + arr[i][j + 1]+ arr[i][j + 2]+ arr[i + 1][j + 1]+ arr[i + 2][j]+ arr[i + 2][j + 1]+ arr[i +2][j + 2];
                 if(hourGlassSum > maxHourGlassSum)
                 {
                     maxHourGlassSum = hourGlassSum;
                     rIndex = i;
                     cIndex = j;
                 }
            }
        }
    }
    
    i = rIndex;
    j = cIndex;
    
    cout << endl << "Max Hour Glass Sum is(Top left point is arr[" << i + 1 << "][" << j + 1 << "] : " << maxHourGlassSum;
    cout << endl << "Hour Glass is : ";
    cout << endl << arr[i][j] << " " <<  arr[i][j + 1] << " " << arr[i][j + 2] << " " << endl << "  " << arr[i + 1][j + 1] << endl <<  arr[i + 2][j] << " " << arr[i + 2][j + 1] << " " << arr[i +2][j + 2];
    
    return 0;
}