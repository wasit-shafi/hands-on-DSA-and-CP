#include<bits/stdc++.h>     // Compile it using command "g++ -std=c++11 -o2 -Wall bit"
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    short int a; 
    unsigned short int b;
    
    int c;
    unsigned int d;

    long e;
    unsigned long f; 

    long long g = 123456789ll;     // CTM : sufix "ll" for long long numbers
    unsigned long long h = 123456789123ll;
    
    __int128_t i = 123456789789456126;    // refer : pg. no 6 (cout does not handle __int128)

    cout << "a : " << a << "\nSizeof(a) : " << sizeof(a);       // CTM : printf() & scanf() are faster as compared to cout & cin 
    cout << "\n\n\nb : " << b << "\nSizeof(b) : " << sizeof(b); // CTM : "\n" is much faster than "endl" because "endl" always causes flush operation
    cout << "\n\n\nc : " << c << "\nSizeof(c) : " << sizeof(c);
    cout << "\n\n\nd : " << d << "\nSizeof(d) : " << sizeof(d);
    cout << "\n\n\ne : " << e << "\nSizeof(e) : " << sizeof(e);
    cout << "\n\n\nf : " << f << "\nSizeof(f) : " << sizeof(f);
    cout << "\n\n\ng : " << g << "\nSizeof(g) : " << sizeof(g);
    cout << "\n\n\nh : " << h << "\nSizeof(h) : " << sizeof(h);
    //cout << "\n\ni : ";
    //cout << "\n\nj : ";

    cout << "\n";
    return 0;
}