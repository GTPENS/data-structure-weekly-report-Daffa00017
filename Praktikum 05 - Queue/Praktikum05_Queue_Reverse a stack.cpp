//5223600017_Daffa Rifqi Arrazzaq

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseStack(stack<int>& stk) {
    queue<int> _queue;

    // Step 1: Show all elemen stack and add into queue
    while (!stk.empty()) {
        _queue.push(stk.top());
        stk.pop();
    }

    // Step 2: delete all elemen from queue into stack
    while (!_queue.empty()) {
        stk.push(_queue.front());
        _queue.pop();
    }
}

int main() {
    stack<int> _stack;

    // Push element into stack
    _stack.push(2);
    _stack.push(4);
    _stack.push(6);
    _stack.push(8);
    _stack.push(10);

    cout << "Stack (isnt reversed): ";
    stack<int> temp = _stack; // copy stack to show
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // reverse the stack 
    reverseStack(_stack);

    cout << "Kcats (its reversed) : ";
    while (!_stack.empty()) {
        cout << _stack.top() << " ";
        _stack.pop();
    }
    cout << endl;

    return 0;
}