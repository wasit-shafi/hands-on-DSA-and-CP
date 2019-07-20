//
//
//
//
#include<iostream>
#include<stdlib.h>
#define BOUND 5

using namespace std;

class Stack{
    int *arr;
    int length, tos;
    public:

    void realloc()
    {
        int size  = tos + 1;
        int *temp = new int[size];
        for (int i = 0 ; i < size ; i++)
         temp[i] = arr[i];

        delete arr;
        length = size + BOUND;
        arr = new int[size + BOUND];

        for(int i = 0 ; i < size ; i++)
            arr[i] = temp[i];

        delete temp;
    }
    Stack()
    {
        length = 0;
        tos = -1;
    }

    void push(int x)
    {
        if (tos == length - 1) realloc();

        arr[++tos] = x;
        cout << x << " Pushed into stack...";
    }
    void pop()
    {
        if(tos == -1)
            cout << "Stack underflow...!";
        else
           cout << arr[tos--] << " Poped from stack...";
    }
    void peek()
    {
        if(tos == -1)
         cout << "Stack underflow...!";
        else
         cout << "Top Element : " << arr[tos];
    }

    void showAll()
    {
     if(tos == -1)
       cout << endl << "Stack Underflow...!";
     else
     {
       cout << "Stack items : ";
       for(int i = 0 ; i <= tos ; i++)
        cout << arr[i] << " ";
     }
    }

    int size()
    {
        cout << "Length of stack is  : " << length;
        return (tos + 1);
    }
};

int main()
{
    Stack s;
    int n, choice, item;

    while(1)
    {
        cout << endl << endl << "  1 -> Push Element";
        cout << endl << "  2 -> Pop Element";
        cout << endl << "  3 -> See Top Element";
        cout << endl << "  4 -> Show All Elements";
        cout << endl << "  5 -> Get Size";
        cout << endl << "  0 -> Exit";

        cout << endl << "  Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
         case 1: cout << endl << "Enter element : ";
                cin >> item;
                s.push(item);
                break;

         case 2: s.pop();
                break;

         case 3: s.peek();
                break;

         case 4:s.showAll();
                break;

         case 5: cout << endl << "Size of stack is : " << s.size();
                break;

         case 0: exit(EXIT_SUCCESS);
       }
    }
    return 0;
}
