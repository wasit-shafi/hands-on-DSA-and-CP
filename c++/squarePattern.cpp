//
//squarePattern.cpp
//
//program to print pattern Q:https://www.hackerrank.com/challenges/printing-pattern-2/problem?h_r=profile
//
#include<iostream>
#include<iomanip>   // for setw()
using namespace std;

int main()
{
    int **arr, order, n, r1, r2, c1, c2, i, j;       // r1 point to top row
                                                     // r2 point to bottom row
    cout << endl << "Enter order of matrix : " ;     // c1 point to left column
    cin >> order;                                    // c2 point to right column
    n  = order;

    arr = new int*[order * 2 - 1];
    for(i = 0 ; i < order * 2 - 1; i++) arr[i] = new int[order * 2 - 1];  // or simply use int arr[order * 2 - 1][order * 2 - 1] for these 2 lines
     
    r1 = c1 = 0;
    r2 = c2 = order * 2 - 2;

    while( r1 <= r2 && c1 <= c2)
    {
       for(i = c1; i <= c2 ; i++) arr[r1][i] = n;   // top row(left to right)
       r1++;  
       for(i = r1; i <= r2 ; i++) arr[i][c2] = n;   // right column(top to bottom)
       c2--;
       for(i = c2; i >= c1 ; i--) arr[r2][i] = n;   // bottom row(right to left)
       r2--;
       for(i = r2; i >= r1 ; i--) arr[i][c1] = n;   // left column(bottom to top)
       c1++;
       n--;
    }
    // printing matrix
    for(i = 0 ; i < order * 2 - 1 ; i++)
    {
        for(j = 0 ; j < order * 2 - 1 ; j++)
            cout << setw(3) <<arr[i][j];
        cout << endl;
    }

    // free memory holding by array
    for(i = 0 ; i < order * 2 - 1; i++)
     delete arr[i];
    delete arr;
   
    return 0;
}