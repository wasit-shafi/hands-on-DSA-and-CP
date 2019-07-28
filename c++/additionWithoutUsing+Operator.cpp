//
//additionWithoutUsing+Operator.cpp
//
//program to add 2 number without using Addition operator
//
#include<iostream>
using namespace std;

int main()
{
    int number1, number2, carry;
n
    cout << endl << "Enter value of x : ";
    cin >> number1;

    cout << endl << "Enter value of y : ";
    cin >> number2;

    do{
       carry = number1 & number2;    // bitwise AND operator is used to generate carry
       number1 = number1 ^ number2;  // Bitwise X-OR oprator is used for sum without carry
       number2 = carry << 1;
    }while(number2);

    cout << endl << "Sum = " << number1;
    return 0;
}
