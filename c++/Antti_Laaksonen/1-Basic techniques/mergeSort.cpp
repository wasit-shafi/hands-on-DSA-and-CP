#include<bits/stdc++.h>
using namespace std;

void merege(vector<int>& arr, int l, int m, int r)
{
    int s1 = m - l + 1;
    int s2 = r - m;

    int arrL[s1], arrR[s2];
    for(int i = 0 ; i < s1 ; i++) arrL[i] = arr[i + l];
    for(int i = 0 ; i < s2 ; i++) arrR[i] = arr[i + m + 1];

    int i = 0;
    int j = 0;
    int k = l;
    while(i < s1 && j < s2)
    {
        if(arrL[i] <= arrR[j])
        {
            arr[k] = arrL[i];
            i++;
        }
        else
        {
            arr[k] = arrR[j];
            j++;
        }
        k++;
    }
    while(i < s1) arr[k++] = arrL[i++];
    while(j < s2) arr[k++] = arrR[j++];
}
void mergeSort(vector<int>& arr, int l, int r)
{
    if(l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merege(arr, l, m, r);
    }
}
int main()
{
    vector<int> arr;

    arr.push_back(50); 
    arr.push_back(20); 
    arr.push_back(25); 
    arr.push_back(50); 
    arr.push_back(15); 
    arr.push_back(5); 
    arr.push_back(27); 
    arr.push_back(30); 
    arr.push_back(22); 
    arr.push_back(13); 
    arr.push_back(45); 
    arr.push_back(61); 
    arr.push_back(33); 
    arr.push_back(33); 
    arr.push_back(39); 

    cout << "Array : ";
    for(int element : arr) cout << element << " ";
    mergeSort(arr, 0, arr.size() - 1 );
    cout << "\nArray : ";
    for(int element : arr) cout << element << " ";
    cout << "\n";
    return 0;
}