//
//fibonacciTrianglePattern.cpp
//
//program to print of pascals triangle where each line start with 'ith' term of fibonacci series
//
#include<iostream>
#include<vector>
using namespace std;

void createFibonacciSequence(vector<int> &fibonacciSequence , int noOfTerms)
{
    int cur, prev, next;
    prev = 0;
    cur = 1;

    fibonacciSequence.push_back(prev);
    fibonacciSequence.push_back(cur);

    for( int i = 3 ; i <= noOfTerms; i++)
    {
        next = prev + cur;
        fibonacciSequence.push_back(next);
        prev = cur;
        cur = next;
    }
}

int main()
{
    int noOfLines, i, j, k;

    cout << endl << "Enter no. of lines : ";
    cin >> noOfLines;

    vector <int> fibonacciSequence;
    createFibonacciSequence(fibonacciSequence, noOfLines * 2 - 1); // we store all the terms in vector

    cout << endl << "Fibonacii sequence are as : ";
    for (auto ir = fibonacciSequence.begin() ; ir != fibonacciSequence.end() ; ++ir)
    cout << *ir << " ";

    cout << endl;
    for( i = 0 ; i < noOfLines ; i++)
    {
        for( j = 0 ; j < noOfLines - i; j++ ) cout << " ";         
        for(k = i ; k <= i + i; k++) // k = i will give the starting index from where we have to start printing...&  each 'l' line of triange contains exactly 'l' items so we have to print 'l' items in each line 'l'  
        cout << fibonacciSequence[k] << " ";
        cout << endl;
    }

    return 0;
}