//
//arrayIntersection.cpp
//
//program to implement Intersection of 2 arrays.
//

#include<iostream>
#include<vector>

using namespace std;

void getArray(int array[], int n)
{
     for( int i = 0 ; i < n ; i++)
      cout << "Arr[" << i + 1 << "] : ",  cin >> array[i];
}

void showArray(int array[], int n)
{
     for( int i = 0 ; i < n ; i++)
       cout << array[i] << " ";
}

bool searchElement(vector <int> &v, int item)
{
     if(v.size() == 0)
      return false;
     else
     {
          for (auto ir = v.begin() ; ir != v.end() ; ir++)
               if(*ir == item) return true;
     }
     
     return false;
}
void printVector(vector <int> v)
{
     for( auto ir = v.begin() ; ir != v.end() ; ir++)
      cout << *ir << " ";
}

int main()
{
    int n, m, i;

    cout << "Enter size of array 1 : ";
    cin >> n;

    cout << "Enter size of array 2 : ";
    cin >> m;

    int *arr1 = new int[n];
    int *arr2 = new int[m];
    vector<int> v;

    cout << endl << "Enter " << n << " elements for array1 : " << endl;
    getArray(arr1, n);

    cout << endl << "Enter " << m << " elements for array2 : " << endl;
    getArray(arr2, m);

    cout << endl << "Array1 : ";
    showArray(arr1, n);
    cout << endl << "Array2 : ";
    showArray(arr2, m);

    for( i = 0 ; i < n ; i++)
    {
        if((searchElement(v, arr1[i])) == false)
             v.push_back(arr1[i]);
    }

    for( i = 0 ; i < m ; i++)
    {
        if((searchElement(v, arr2[i])) == false)
             v.push_back(arr2[i]);
    }

    cout << endl << "Array intersection is : ";
    printVector(v);

    return 0;
}