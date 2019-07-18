//
//logNtimeComplexity.cpp
//
//program to show log n time complexity example
//
#include<iostream>
#include<stdio.h> // for getchar()
#include<limits>
using namespace std;

int main()
{
    int n;
    char choice = 'y';

    do{
        cout << endl << "Enter value of n : ";
        cin >> n;
        int count  = 0;

        for ( int i = n ; i > 1 ; i = i/2)
            cout << endl << "count = " << ++count;

        cout << endl << "Do you want to continue(y/n)...";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        choice = getchar();
      }while(choice == 'y' || choice == 'Y');
    
    cout << endl << "End of main()";
    return 0;
}