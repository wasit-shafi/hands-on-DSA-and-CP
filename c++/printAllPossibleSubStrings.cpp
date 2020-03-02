//
//printAllPossibleSubStrings.cpp
//
//program to print all possible sub-strings of a given string.
//
#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;

    cout << endl << "Enter string : ";
    getline(cin, str);
    n = str.length();    // now we don't have to recalculate string length

    cout << "Method 1 : \n";
	for(int i = 0 ; i < n; i++)
	{
		for(int j = i ; j < n; j++)
		{
            cout << "'";
			for(int k = i ; k <= j ; k++)
				cout << str[k];
			cout <<"' ";
		}
		cout << "\n";
	}


    cout << "\nMethod 2 : \n";
	for(int i = 0 ; i < n; i++)
	{
		for(int j = i ; j < n; j++)
		{
            cout << "'";
			for(int k = 0 ; i + k <= j ; k++)
				cout << str[i + k];
			cout <<"' ";
		}
		cout << "\n";
	}

    cout << "\nMethod 3 : \n";
    for(int i = 0 ; i < n ; i++)
    {
        for( int len = 1 ; len <= n - i; len++)
            cout << "\'" << str.substr(i, len) << "\' ";
        cout << "\n";
    }
    

	cout << "\nMethod 4 : \n";
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0 ; j < n - i ; j++)
		{
            cout << "'";
			for(int k = j ; k <= j + i ; k++)
				cout << str[k];
			cout <<"' ";
		}
		cout << "\n";
	}

    return 0;
}