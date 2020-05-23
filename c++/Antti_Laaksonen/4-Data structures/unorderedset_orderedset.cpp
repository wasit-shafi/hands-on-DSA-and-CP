#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    vector<int> vnum;
    vector<string> vnames;

    set<int> _set;
    set<string> _names;

    unordered_set<int> _uset;
    unordered_set<string> _unames;

    
    // vector
    vnum.push_back(10);
    vnum.push_back(-2);
    vnum.push_back(5);
    vnum.push_back(3);
    vnum.push_back(12);
    vnum.push_back(1);

    _set.insert(10);
    _set.insert(-2);
    _set.insert(5);
    _set.insert(3);
    _set.insert(12);
    _set.insert(1);

    _uset.insert(10);
    _uset.insert(-2);
    _uset.insert(5);
    _uset.insert(3);
    _uset.insert(12);
    _uset.insert(1);

     vnames.push_back("wasit");
     vnames.push_back("Wasit shafi");
     vnames.push_back("shaba");
     vnames.push_back("zain");
     vnames.push_back("hamid");

    _names.insert("wasit");
    _names.insert("Wasit shafi");
    _names.insert("shaba");
    _names.insert("zain");
    _names.insert("hamid");


    _unames.insert("wasit");
    _unames.insert("Wasit shafi");
    _unames.insert("shaba");
    _unames.insert("zain");
    _unames.insert("hamid");

    
    cout << "Acutal order of insertion :\n";
    for(auto item : vnum) cout << item << " ";
    cout << "\n";
    for(auto item : vnames) cout << item << " ";
    
    cout << "\n\nOrdered Set Elements :";
    cout << "\n_set   : "; for(auto item: _set) cout << item << " ";
    cout << "\n_names : "; for(auto item: _names) cout << item << " ";

    cout << "\n\nUn-Ordered Set Elements :";
    cout << "\n_uset   : "; for(auto item: _uset) cout << item << " ";
    cout << "\n_unames : "; for(auto item: _unames) cout << item << " ";
    cout << "\n";
    return 0;
}