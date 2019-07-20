//
//
//
//
#include<iostream>
#include<stdlib.h>
using namespace std;

class Array{
    int *arr, length, listSize;
public:
    Array(int length)
    {
        this->length = length;
        listSize = 0;
        arr = new int[length];
    }
    void insert(int theIndex, int theElement)
    {

        if(listSize == length)
            cout << endl << "Array is full...!";
        else if(theIndex < 0 || theIndex > listSize)
            cout << endl << "Invalid index...!";
        else if(theIndex == listSize)
            arr[listSize++] = theElement;
        else
        {
         int i;
         for(i = listSize ; i > theIndex ; i--)
         {
                arr[i] = arr[i - 1];
         }
         arr[i] = theElement;
         listSize++;
        }
    }
    void output()
    {
        if(listSize == 0)
         cout << endl << "Array is empty...!";
        else
        {
         cout << endl << "Array elements are as : ";
         for(int i = 0 ; i < listSize ; i++)
             cout << arr[i] << "  ";
        }
    }
    int size()
    {
        return listSize;
    }
    void getElement(int theIndex)
    {
        if(theIndex < 0 || theIndex >= listSize)
            cout << endl << "Invalid index...!";
        else
            cout << endl << "arr[" << theIndex << "] = " << arr[theIndex];
    }
    int indexOf(int theElement)
    {
        int index = -1;
        for(int i = 0 ; i < listSize ; i++)
        {
            if(arr[i] == theElement)
            {
                index = i;
                break;
            }
        }
        return index;
    }
    void erase(int theIndex)
    {
        if (listSize == 0)
            cout << endl << "Array is empty...!";
        else if(theIndex >= listSize)
            cout << endl << "Invalid index....!";
        else
        {
            for(int i = theIndex ; i < listSize - 1 ; i++)
            {
                arr[i] = arr[i + 1];
            }
            listSize--;
            cout << endl << "Element deleted.";
        }

    }
    bool empty()
    {
        if(listSize == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int choice, n, index, element;

    cout << endl << "Enter no. of elements :";
    cin >> n;

    Array a(n);

    while(1)
    {
        cout << endl << endl << endl << "1 -> insert.";
        cout << endl << "2 -> output.";
        cout << endl << "3 -> count.";
        cout << endl << "4 -> getElement.";
        cout << endl << "5 -> indexOf.";
        cout << endl << "6 -> erase.";
        cout << endl << "7 -> empty.";

        cout << endl << "0 -> Exit.";
        cout << endl << endl << "Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: cout << endl << "Enter element : ";
                    cin >> element;
                    cout << "Enter index :";
                    cin >> index;
                    a.insert(index, element);
                    break;
            case 2: a.output();
                    break;
            case 3: a.output();
                    break;
                    cin >> index;
            case 4: cout << endl << "Enter index : ";
                    cin >> index;
                    a.getElement(index);
                    break;
            case 5: cout << "Enter element : ";
                    cin >> element;
                    index = a.indexOf(element);
                    if(index == -1)
                        cout << endl << "Element not found...!";
                    else
                        cout << endl << "Index of  " << element << " is : " << index;
                    break;
            case 6: cout << endl << "Enter index : ";
                    cin >> index;
                    a.erase(index);
                    break;

            case 7: if(a.empty() == true)
                      cout << endl << "Array is empty...!";
                     else
                      cout << endl << "Array is not empty.";
                    break;
            case 0: exit(0);
        }
    }
    return 0;
}
