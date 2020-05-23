#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<float> v2;
    vector<string> v3;
    
    v1.push_back(11);
    v1.push_back(22);
    v1.push_back(33);
    v1.push_back(44);
    v1.push_back(55);
    v1.push_back(66);

    v2.push_back(11.1);
    v2.push_back(22.2);
    v2.push_back(33.3);
    v2.push_back(44.4);
    v2.push_back(55.5);
    v2.push_back(66.6);
    
    v3.push_back("Wasit");
    v3.push_back("Amir");
    v3.push_back("Adil");
    v3.push_back("Asif");
    v3.push_back("Aqib");

    cout << "\nV1 : ";
    for(auto item : v1)
        cout << item << "  ";
    cout << "\nV2 : ";
    for(auto item : v2)
        cout << item << "  ";
    
    cout << "\nV3 : ";
    for(auto item : v3)
        cout << item << "  ";
    cout << "\n";
    return 0;
}