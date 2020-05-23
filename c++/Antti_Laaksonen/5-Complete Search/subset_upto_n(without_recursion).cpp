// Page no 48
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cout << "Enter value of n : ";
    cin >> n;

    for(int b = 0 ; b < (1<<n); b++) // there will be total 2^n subsets, here b = 0 to 2^n as we are simply multiplying 1 by n times 2
    {
        for(int i = 0 ; i < n ; i++) // working principle....???
            if(b & (1 << i))
                v.push_back(i);
        cout << "{ "; for(auto element : v) cout << element << " "; cout << "}";
        v.clear();
    }
    cout << "\n";
    return 0;
}