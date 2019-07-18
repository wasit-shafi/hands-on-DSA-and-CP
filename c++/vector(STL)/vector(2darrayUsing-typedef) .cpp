//
//vector(2darray).cpp
//
//program to create 2d array using vectors(STL)
//
//ref: https://www.youtube.com/watch?v=Da_PPyjOUrE&list=PLOAuB8dR35ocZ2YtaGzhJetZqLW2J3s5Z&index=44
#include<iostream>
#include<vector>
using namespace std;
typedef vector<vector<int> > matrix;
typedef vector<int> row;
int main()
{
    int rows, cols;
    matrix m;
    
    cout << endl << "Enter no. of rows : ";
    cin >> rows;
    cout << endl << "Enter no. of cols : ";
    cin >> cols;
    
    // CTM : Here the column size can vary as there is no restriction on that...eg: we can create jagged array  using vector of vectors 
    for(int i = 0 ; i < rows; i++)
    {
        row temp;
        for(int j = 0 ; j < cols ; j++)
            temp.push_back(i);
        
        m.push_back(temp);
    }

    cout << endl << "Matrix elements are as : " << endl;
    for(int i = 0 ; i < m.size(); i++)
    {
        for(int j = 0 ; j <  m[i].size() ; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}