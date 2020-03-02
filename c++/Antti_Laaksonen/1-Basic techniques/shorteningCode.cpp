// for more info refer : https://www.geeksforgeeks.org/c-methods-of-code-shortening-in-competitive-programming/
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;       // CTM: In typedef we have to end it with ';' it will not be included at the time of replacement but in case of macro it will be inlcude ex : "#define pb push_back;" is invalid as it will be like "v.push_back;(10)"
typedef pair<int, int> pi;
typedef long long ll;

#define SUM(a, b) (a)+(b)
#define SQR (a) (a)*(a)
#define unsinged long long ull
#define FOR(i, a, b) for(int (i) = (a) ; (i) < (b) ; (i++))
#define f first
#define s second
#define pb push_back
#define vsize (int)v.size()

int main()
{
    int i;
    vi v;

    v.pb(10);
    v.pb(10);
    v.pb(20);
    v.pb(30);
    v.pb(40);
    
    cout << "Vector elements are as : ";
    FOR(i, 0, vsize)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}