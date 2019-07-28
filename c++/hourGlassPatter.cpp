//
//hourGlassPattern
//
//c++ program to print hour glass pattern on console
//
#include<iostream>
using namespace std;

int main()
{
    int noOfLines;

    cout << endl << "Enter no. of lines : ";
    cin >> noOfLines;

//  pattern 1
    for(int i = 1 ; i <= noOfLines ; i++)
    {
        for(int j = 1 ; j < i ; j++) cout << " ";
        for(int j = i ; j <= noOfLines ; j++) cout << j << " ";
        cout << endl;
    }

    for(int i = 2 ; i <= noOfLines ; i++)
    {
        for( int j = noOfLines - i; j >= 1 ; j--) cout << " ";

        for( int j = noOfLines - i + 1 ; j <= noOfLines ; j++) cout<< j << " ";
        cout << endl;
    }

/*  pattern 1 
    for(int i = 1 ; i <= noOfLines ; i++)
    {
        for(int j = 1 ; j < i ; j++) cout << " ";
        for(int j = i ; j <= noOfLines ; j++) cout << j << " ";
        cout << endl;
    }

    for(int i = 1 ; i <= noOfLines ; i++)
    {
        for( int j = noOfLines - i; j >= 1 ; j--) cout << " ";
        for( int j = noOfLines ; j > noOfLines - i ; j--) cout<< j << " ";
        cout << endl;
    }
*/
}