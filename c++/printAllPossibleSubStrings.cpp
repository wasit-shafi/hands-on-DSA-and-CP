//
//printAllPossibleSubStrings.cpp
//
//program to print all possible sub-strings of a given string.
//
#include<iostream>
using namespace std;

int main()
{
    string str;

    cout << endl << "Enter string : ";
    getline(cin, str);

    cout << "All Possible Sub-Strings are as : " << endl << endl;
    for(int i = 0 ; i < str.size() ; i++)
    {
        for( int len = 2 ; len <= str.size() - i; len++)
            cout << "\'" << str.substr(i, len) << "\'  ";
        cout << endl ;
    }
    
    return 0;
}