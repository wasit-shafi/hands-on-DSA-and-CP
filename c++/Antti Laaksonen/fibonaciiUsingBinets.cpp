#include<bits/stdc++.h>
using namespace std;

int fibonacii(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacii(n + - 1 ) + fibonacii (n - 2);
}

int binets(int n)
{
    return ((pow(1 + sqrt(5), n)) - (pow(1 - sqrt(5), n))) / (pow(2,n) * sqrt(5)); 
            // or
    /*
    int x = pow(1 + sqrt(5), n);
    int y = pow(1 - sqrt(5), n);
    int z = pow(2,n) * sqrt(5);

    return (x - y) / z;
    */
}

int main()
{
    int n;

    cout << "Enter no of terms : ";
    cin >> n;
    cout << "Fibonacii series  : ";
    for( int i = 0 ;  i < n ; i++)
        cout << fibonacii(i) << " ";

    cout << "\nFibonacii series  : ";
    for( int i = 0 ;  i < n ; i++)
        cout << binets(i) << " ";

    return 0;
}