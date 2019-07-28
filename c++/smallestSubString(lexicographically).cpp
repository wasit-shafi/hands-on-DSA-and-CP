//
//smallestSubString(lexicographically).cpp
//
// program to print all possible substring of length k and print smallest sub-substring
//
// Problem : https://www.hackerrank.com/challenges/java-string-compare/problem

#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
vector<string> createSubStrings(string str, int k)
{
    // CTM : total no of sub-strings of length 'k' = str.length() - k + 1 == substrings.size()
    vector<string> subStrings;
    string temp;
    for(int i = 0 ; i < str.length() - k + 1 ; i++)
    {
        temp =  str.substr(i, k);
        subStrings.push_back(temp);
    }
    return subStrings;
}

void printSubStrings(vector<string> subStrings)
{
    cout << endl << "SubStrings are as follows : " << endl;
    for( int i = 0 ; i < subStrings.size() ; i++ )
     cout << "'" << subStrings[i] << "'" << endl;  
}

bool checkIsStr2SmallestThanStr1(string str1, string str2)
{
    // CTM we already know that both the string are of same length...

    for(int i = 0 ; i < str1.length() ; i++)
    {
        if(str1[i] > str2[i])
         return true;
        else if(str1[i] < str2[i])
         return false;
        // other wise both are same , so continue
        //cout << "hello world...." << endl;
    }
     // now we know we have traversed all string a upto that both string are same(String are also are of same length)
     // so return false;
     return false;
}
int minSubStringIndex(vector<string> subStrings)
{
    int minIndex = 0; // Assume min is at index 0 ;
    int maxIndex = 0; // Assume max is at index 0 ;

    string str1, str2;

    for( int i = 1 ; i < subStrings.size() ; i++ )
    {
        str1 = subStrings[minIndex];
        str2 = subStrings[i];
        bool isStr2SmallestThanStr1 = checkIsStr2SmallestThanStr1(str1, str2);// will give min
        str1 = subStrings[maxIndex];
        str2 = subStrings[i];
        bool isStr1SmallestThanStr2 = checkIsStr2SmallestThanStr1(str2, str1); // will max
        
        if (isStr2SmallestThanStr1)
            minIndex = i;
        if (isStr1SmallestThanStr2)
            maxIndex = i;
    }
    cout << endl << "Greatest string is : " << subStrings[maxIndex]; // lexicographic order
    return minIndex;
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
    vector<string> subStrings = createSubStrings(str, k);
    int Index = minSubStringIndex(subStrings);
    
    printSubStrings(subStrings);
    cout << endl << "Total no of Substrings is [Using n - k + 1]: " << str.length() - k + 1;
    cout << endl << "Smallest string is (Lexicographically): " << subStrings[Index];

    return 0;
}