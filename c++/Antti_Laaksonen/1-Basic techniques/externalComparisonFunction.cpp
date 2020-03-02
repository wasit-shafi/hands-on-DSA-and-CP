#include<bits/stdc++.h>
using namespace std;

bool fun(string s1, string s2) // call back function
{
    //we have to return true is first arugument is smaller that second otherwise return false
    if (s1.size() != s2.size()) return s1.size() < s2.size();
    return s1 < s2;
}
int main()
{
    vector<string> v1;
    vector<string> v2;

    v1.push_back("titForTat");
    v1.push_back("toTheLazyDog");
    v1.push_back("jumpsOver");
    v1.push_back("brownFox");
    v1.push_back("quick");
    v1.push_back("the");

    v2.push_back("titForTat");
    v2.push_back("toTheLazyDog");
    v2.push_back("jumpsOver");
    v2.push_back("brownFox");
    v2.push_back("quick");
    v2.push_back("the");

    sort(v1.begin(), v1.end()); // by default it sort lexicographically
    cout << "Vector Elements are as : \n";
    for(string s : v1) cout << s << "\n";

    sort(v2.begin(), v2.end(), fun); // sorts according to size of string
    cout << "\n\nVector Elements are as : \n";
    for(string s : v2) cout << s << "\n";
    
    return 0;
}