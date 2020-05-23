#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    stack<int> _stack;

    queue<int> _queue;
    deque<int> _deque; // CTM : Not dequeue<int>
    priority_queue<int> _priority_queue;

    //If we want to create a priority queue that supports finding and removing the smallest element, 
    priority_queue<int, vector<int>> _priority_queue2;
    priority_queue<int, vector<int>, greater<int>> _priority_queue3; // priority queue in increasing order

    _stack.push(1);
    _stack.push(2);
    _stack.push(3);
    _stack.push(4);

    _queue.push(1);
    _queue.push(2);
    _queue.push(3);
    _queue.push(4);

    _priority_queue.push(3);
    _priority_queue.push(1);
    _priority_queue.push(4);
    _priority_queue.push(2);

    _priority_queue2.push(3);
    _priority_queue2.push(1);
    _priority_queue2.push(4);
    _priority_queue2.push(2);

    _priority_queue3.push(3);
    _priority_queue3.push(1);
    _priority_queue3.push(4);
    _priority_queue3.push(2);

    // CTM : stack, queue & priority_queue has push()/pop() unlike deque which has push_front()/push_back() & pop_front()/pop_back() build in functions
    _deque.push_back(3);
    _deque.push_front(2);
    _deque.push_back(4);
    _deque.push_front(1);
/*STACK        QUEUE        DEQUEUE        PRIORITY QUEUE    PRIORITY QUEUE2   PRIORITY QUEUE3

  |4|         - - - -       - - - -          - - - -           - - - -           - - - -
  |3|         4 3 2 1|      4 3 2 1        | 4 2 3 1 |       | 4 3 2 1 |       | 1 2 3 4 |
  |2|         - - - -       - - - -          - - - -           - - - -           - - - -
  |1|
   -
*/
    cout << "\n_stack.top : " << _stack.top();

    cout << "\n\nqueue.front : " << _queue.front();
    
    cout << "\n\npriority_queue.front : " << _priority_queue.top();
    cout << "\npriority_queue2.front : " << _priority_queue2.top();
    cout << "\npriority_queue2.front : " << _priority_queue3.top();
    
    cout << "\n\ndeque.front() : " << _deque.front();
    cout << "\ndeque.back()  : " << _deque.back();
    cout << "\n";   
    return 0;
}