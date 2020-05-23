#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int array[] = {7, 6, 5, 4, 3, 2, 1};
    vector<int> v = {7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(array)/ sizeof(array[0]);


    cout << "Vector elements are as : ";
    for(auto item : v) cout << item << " ";
    cout << "\nArray elements are as  : ";
    for(int i = 0 ; i < len ; i++) cout << array[i] << " ";

    reverse(array, array + len);
    reverse(v.begin(), v.end());
    cout << "\n\nREVERSE : \n";
    cout << "Vector elements are as : ";
    for(auto item : v) cout << item << " ";
    cout << "\nArray elements are as  : ";
    for(int i = 0 ; i < len ; i++) cout << array[i] << " ";

    random_shuffle(array, array + len);
    random_shuffle(v.begin(), v.end());
    cout << "\n\nRANDOM SHUFFLE: \n";
    cout << "Vector elements are as : ";
    for(auto item : v) cout << item << " ";   
    cout << "\nArray elements are as  : ";
    for(int i = 0 ; i < len ; i++) cout << array[i] << " ";

    sort(array, array + len);
    sort(v.begin(), v.end());
    cout << "\n\nSORT : \n";
    cout << "Vector elements are as : ";
    for(auto item : v) cout << item << " ";
    cout << "\nArray elements are as  : ";
    for(int i = 0 ; i < len ; i++) cout << array[i] << " ";

    return 0;
}