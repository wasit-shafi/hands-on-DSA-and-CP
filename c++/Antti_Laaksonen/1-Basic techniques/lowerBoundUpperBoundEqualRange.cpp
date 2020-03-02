#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(14);
    v.push_back(3);
    v.push_back(10);
    v.push_back(55);
    v.push_back(34);
    v.push_back(10);
    v.push_back(54);
    v.push_back(72);
    v.push_back(10);
    v.push_back(17);
    v.push_back(10);
    v.push_back(40);

    sort(v.begin(), v.end());

    cout << "Elements are as : ";    
    for(int element:v) cout << element << " ";

    vector<int>::iterator lb = lower_bound(v.begin(), v.end(), 10);
    auto ub = upper_bound(v.begin(), v.end(), 10);
    cout << "\nlower_bound(v.begin(), v.end(), 10) : " << *lb; // return element less than or equal to 10
    cout << "\nupper_bound(v.begin(), v.end(), 10) : " << *ub; // return element greater than 10
    cout << "\nFrequency of 10 is : " << ub - lb;

    pair<vector<int>::iterator,vector<int>::iterator> itr = equal_range(v.begin(), v.end(), 10); // return both lower_bound as well as upper_bound
    //or
    //auto itr = equal_range(v.begin(), v.end(), 10);
    cout << "\nFrequency of 10 is : " << itr.second - itr.first;
    cout << "\n";
    return 0;
}