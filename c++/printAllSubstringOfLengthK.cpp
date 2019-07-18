//
//printAllSubstringOfLengthK.cpp
//
//program to print all possible substring of length k
//

#include<iostream>
#include<vector>
using namespace std;

void printSubString1(string str, int k)
{
    int count = 0;
    for(int i = 0 ; i < str.length() - k + 1 ; i++)
    {
        cout << "'";
        for(int j = i ; j < i + k ; j++)
            cout << str[j];
        cout << "'" << endl ;
     
        count++;
    }
    cout << endl << "Total no of Substring is : " << count;
    cout << endl << "Total no of Substring is [Using Formula : N - K + 1] :" << str.length() - k + 1;
}

void printSubString2(string str, int k)
{
    int count = 0;

    for( int i = 0 ; i < str.length() - k + 1; i++ )
    {
        cout << "'" << str.substr(i, k) << "'" << endl;
        count++;
    }
    cout << endl << "Total no of Substring is : " << count;
    cout << endl << "Total no of Substring is [Using Formula : N - K + 1] :" << str.length() - k + 1;
}

void SubStringUsingVectors(string str, int k)
{
    // or substr[str.length() - k + 1][k]; as we already know the total no of substrings
    vector<vector<char> > substr;
    vector<char> temp;
    for(int i = 0 ; i < str.length() - k + 1 ; i++)
    {
        for(int j = i ; j < i + k ; j++)
            temp.push_back(str[j]);   
         substr.push_back(temp);
         temp.clear();
    }

    // we can also return the vector containing all substring
    for( int i = 0 ; i < substr.size() ; i++ )
    {
        for ( int j = 0 ; j < substr[i].size() ; j++ )
            cout << substr[i][j];
        cout << endl;
    }
    cout << endl << "Total no of Substring is[Using substr.size()] : " << substr.size();
}


int main()
{
    string str;
    int k;

    cout << "Enter String : ";
    getline(cin, str);
    
    cout << "Enter k, length of substrigs you want...";
    cin >> k;

    cout << endl << "String is as follows : " << str;
    
    cout << endl << endl << "SubString of length " << k << " are as follows(Method 1) : " << endl;    
    printSubString1(str, k);

    cout << endl << endl << "SubString of length " << k << " are as follows(Method 2) : " << endl;    
    printSubString2(str, k);

    cout << endl << endl << "SubString of length " << k << " are as follows(Method 3) : " << endl;    
    SubStringUsingVectors(str, k);
    
    return 0;
}