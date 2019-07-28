//
//vector(1darray).cpp
//
//program to show insert and show arrays elements using STL
//
//for more refer : https://www.geeksforgeeks.org/vector-in-cpp-stl/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> array;
    int data;
    char choice;

    do{
        cout << endl << "Enter element : ";
        cin >> data; 
        array.push_back(data);
        cout << endl << "Do you want to continue[Y/N]...";
        cin >> choice;
      }while(choice == 'y' || choice == 'Y');

      cout << endl << "List elements are as : ";
      //print elements using iterator
      for(auto it = array.begin() ; it != array.end() ; it++)
	cout << *it << " " ;
      

      //simple method to print vector elements
      //for(int i = 0 ; i < array.size(); i++)
	//cout << array[i] << " ";	

    cout << endl << "Size of array is : " << array.size();
    return 0;
}
