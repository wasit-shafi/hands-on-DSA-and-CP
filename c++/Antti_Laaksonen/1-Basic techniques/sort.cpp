#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(5);
    arr.push_back(15);
    arr.push_back(6);
    arr.push_back(30);
    arr.push_back(22);
    arr.push_back(90);
    arr.push_back(45);
    arr.push_back(0);
    
    cout << "Arr : ";
    for(auto itr = arr.begin() ; itr != arr.end() ; itr++) cout << *itr << " ";

    // ascending order sort
    sort(arr.begin(), arr.end());
    cout << "\nArr : ";
    for(auto itr = arr.begin() ; itr != arr.end() ; itr++) cout << *itr << " ";

    // descending order sort
    sort(arr.rbegin(), arr.rend());
    cout << "\nArr : ";
    for(auto itr = arr.begin() ; itr != arr.end() ; itr++) cout << *itr << " ";

    return 0;
}