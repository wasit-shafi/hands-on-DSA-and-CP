//
//dealingTestCases.cpp
//
//program to show how to deal efficiently with test cases
//
#include<iostream>
using namespace std;

int main()
{
    int noOfTestCases;

    cout << endl << "Enter no of test cases : ";
    cin >> noOfTestCases;

    while(noOfTestCases--)// NOTE: here the value of noOfTestCases is decreasing after each iteration & when the loop terminates its
    {                     // value will be 0 i.e we no longer have access to what was value of noOfTestCases, so keep that in mind.
        cout << endl <<"hi.";
    }

    // Instead of
    // CTM : The below for loop will do same thing as above while loop but it requires one extra  variable 'i'

    /*cout << endl ;
    for(int i = 0 ; i < noOfTestCases ; i++)
    {
        cout << endl << "hi.";
    }
    */

    return 0;
}