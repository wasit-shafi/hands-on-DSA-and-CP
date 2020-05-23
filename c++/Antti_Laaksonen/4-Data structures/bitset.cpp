#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    bitset<5> b1;
    bitset<10> b2(string("10010"));    
    
    b1[0] = 1;
    b1[1] = 1;
    b1[2] = 0;
    b1[3] = 0;
    b1[4] = 1;

    cout << "b1 : " << b1;
    //      or
    len = b1.size();
    for(int i = 0 ; i < len; i++) cout << "\nb1[" << i << "] : " << b1[i];

    cout << "\n\nb2 : " << b2;
    cout << "\nb2.size() : " << b2.size();
    return 0;
}