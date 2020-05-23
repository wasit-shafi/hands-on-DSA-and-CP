#include<iostream>
#include<vector>
using namespace std;

int N = -1;
vector<int> v;

void subsets(int k)
{
    if(k == N)
    {
        cout << "\n{"; for(auto item : v) cout << item << " "; cout << "}";
    }
    else
    {
        subsets(k + 1); // not included k
        v.push_back(k); // add k
        subsets(k+1);   // included k
        v.pop_back();   // removes the last element i.e k       
    }
}

int main()
{
    cout << "Enter value of N : ";
    cin >> N;

    subsets(0);
    cout << "\n";
    return 0;
}