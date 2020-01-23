#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int noOfLines, difference, x;

    cout << "Enter no of lines : ";
    cin >> noOfLines;

    for(int i = 1; i <= noOfLines ; i++)
    {
        x = i;
        cout << setw(3) << x << " ";
        difference = noOfLines - 1;
        for(int j = 2 ; j <= i ; j++)
        {
           x = x + difference--;
           cout << setw(3) << x << " ";
        }
        cout << endl;
    }
    return 0;
}