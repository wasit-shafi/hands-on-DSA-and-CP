//
//vector(callByValueCallByReference).cpp
//
//program to show how to pass vector as call by value and call by reference
//
#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> V;

void fun1(V arr)  // Taking it as call by value
{
    for (int i = 1 ; i < 10 ; i++) arr.push_back(i * 11 );
    
    cout << endl << "Vector =[ Inside fun1() ]: " << endl;
    for (int i = 0 ; i < arr.size() ; i++) cout << arr[i] << "  ";
}

void fun2(V& arr) // Taking it as call by value
{
    for (int i = 1 ; i < 10 ; i++) arr.push_back(i * 11 );
    
    cout << endl << "Vector =[ Inside fun2() ]: " << endl;
    for (int i = 0 ; i < arr.size() ; i++) cout << arr[i] << "  ";
}
int main()
{
    V arr;
    for (int i = 1 ; i < 5 ; i++) arr.push_back(i * 11 );
    
    cout << endl << "Vector before calling fun1()[ Inside main() ]: " << endl;
    for (int i = 0 ; i < arr.size() ; i++) cout << arr[i] << "  ";

    fun1(arr);
    cout << endl << "Vector after calling fun1() [ Inside main() ]: " << endl;
    for (int i = 0 ; i < arr.size() ; i++) cout << arr[i] << "  ";

    fun2(arr);
    cout << endl << "Vector after calling fun2() [ Inside main() ]: " << endl;
    for (int i = 0 ; i < arr.size() ; i++) cout << arr[i] << "  ";

    return 0;
}