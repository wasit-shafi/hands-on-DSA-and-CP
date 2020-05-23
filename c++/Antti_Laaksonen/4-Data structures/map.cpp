#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;

    m["Wasit"] = 10;
    m["Amir"] = 20;
    m["Adil"] = 30;
    m["Huzaif"] = 40;
    m["Aqib"] = 50;

    m["Wasit"] = 60; // it will replace previous
    
    cout << "m[\"Wasit\"] : " << m["Wasit"];
    cout << "\nm[\"Zain\"]  : " << m["Zain"]; // this is not present in map, so it will be added in map with default value 0

    if(m.count("Wasit"))
        cout << "\nRecord present for \'Wasit\'";
    else
        cout << "\nRecord not present for \'Wasit\'";

    if(m.count("Moin"))
        cout << "\nRecord present for \'Moin\'";
    else
        cout << "\nRecord not present for \'Moin\'";

    
    cout << "\n\nMap Element are as : \n";
    for(auto item : m)
        cout << item.first << " " << item.second << endl;

    return 0;
}