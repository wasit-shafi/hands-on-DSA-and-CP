#include<iostream>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, 
            tree_order_statistics_node_update>
        indexed_set;
int main()
{
    int len;
    indexed_set iSet; // it performs all the operation that set performs, along with 2 additional operations find_by_order() & order_of_key() in O(log n) time complexity.

    iSet.insert(10);
    iSet.insert(5);
    iSet.insert(6);
    iSet.insert(10);
    iSet.insert(10);
    iSet.insert(-5);
    iSet.insert(10);
    iSet.insert(5);
    iSet.insert(10);

    cout << "indexed_set : ";for(auto item : iSet) cout << item << " ";

    cout << "\n\niSet.size() : " << iSet.size();
    auto itr = iSet.find_by_order(5); // return the iterator for element    
    cout << "\n\n*itr : " << *itr;

    // return the no. of elements which are strictly smaller the x
    cout << "\n\norder_of_key(-10) : " << iSet.order_of_key(-10);
    cout << "\norder_of_key(-5)  : " << iSet.order_of_key(-5);
    cout << "\norder_of_key(-2)  : " << iSet.order_of_key(-2); // CTM : -5 is smaller than -2

    cout << "\n\norder_of_key(6)  : " << iSet.order_of_key(6);
    cout << "\norder_of_key(8)  : " << iSet.order_of_key(8);
    cout << "\norder_of_key(10) : " << iSet.order_of_key(10);
    cout << "\norder_of_key(20) : " << iSet.order_of_key(20);
    cout << "\n";

    return 0;
}