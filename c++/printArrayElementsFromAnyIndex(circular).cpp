//
//printArrayElementsFromAnyIndex(circular).cpp
//
//program to print all array elements starting from index given by user
//
#include<iostream>
using namespace std;

int main()
{
   int n, i, start, arr[] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
   char choice, buffer[256];

   cout << "Array elements are as follows : ";
   for(i = 0 ; i < (sizeof(arr)/sizeof(arr[0])); i++)  cout << arr[i] << "  ";
   
   cout << endl << endl;
   do{
      do{
         cout << endl << "Enter index from which you want to print array [HINT 0 <= index <= " << (sizeof(arr)/sizeof(int)) - 1<< " ]: ";
         cin >> start;
         if(start < 0 || start >= sizeof(arr)/sizeof(int)) cout << "Invalid index...! Try Again";
        }while(start < 0 || start >= sizeof(arr)/sizeof(int));
      i = start;
      cout << endl << "Array elements starting from index " << i << " are as : ";
      i = i % (sizeof(arr)/sizeof(int));             // or i = i % 10; // where 10 is the no of elements in array
      do{
          cout << arr[i] << "  "; 
          i++;
          i = i % (sizeof(arr)/sizeof(int));           // or i = i % 10;
        }while( i != start);
      fgets(buffer, sizeof(buffer), stdin);
      cout << endl << "Do you want to continue(y/n)...";
      choice = getchar();
     }while(choice == 'y' || choice == 'Y');
   return 0;
}