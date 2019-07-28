//
//permutation.cpp
//
//program to print all permutations with duplicates allowed
//Ref: https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
//
#include<bits/stdc++.h>
using namespace std;

void swap(string &s, int i, int j)
{
     char t = s[i];
     s[i] = s[j];
     s[j] = t;
}

void print(const string &str)
{
    cout << endl << str;
}

void permutation(string &str, int start)
{
    if(start == str.length())
        print(str);
    else
    {
        for(int i = start ; i < str.length() ; i++)
        {
            swap(str, start, i);
            permutation(str, start + 1);
            swap(str, start, i);
        }
    }
}
int main()
{
    string str;

    cout << "Enter string : ";
    getline(cin, str);

    cout << endl << "Permutation for \"" << str << "\" is : "; 
    permutation(str, 0);

    return 0;
}