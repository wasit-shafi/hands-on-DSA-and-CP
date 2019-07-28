//
//circularMatrix.cpp
//
//program to print circular matrix pattern
//
#include<iostream>
#include<iomanip>    // used for setw()
using namespace std;

int main()
{
    int order;

    cout << endl << "Enter order of matrix : " ;
    cin >> order;

    int arr[order][order];
    int r1, r2, c1, c2, i;

    r1 = c1 = 0;
    r2 = c2 = order - 1;

    int count = 1;
    while( r1 <= r2 && c1 <= c2)
    {
        for(i = c1; i <= c2 ; i++) arr[r1][i] = count++; // top row(right to left)
        r1++;

        for(i = r1; i <= r2 ; i++) arr[i][c2] = count++; // right column(top to bottom)
        c2--;

        for(i = c2; i >= c1 ; i--) arr[r2][i] = count++; // bottom row(right to left)
        r2--;

        for(i = r2; i >= r1 ; i--) arr[i][c1] = count++; // left column(bottom to top)
        c1++;
    }
    // printing matrix
    for(int i = 0 ; i < order ; i++)
    {
        for( int j = 0 ; j < order ; j++)
            cout << setw(3) <<arr[i][j];
        cout << endl;
    }
    return 0;
}