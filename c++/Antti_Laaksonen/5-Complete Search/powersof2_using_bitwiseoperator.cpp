#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "n... ";
    cin >> n;
    for(int i = 0 ; i <= n ; i++) cout << "\n2^" << i << " : " << (1 << i);

    return 0;
}