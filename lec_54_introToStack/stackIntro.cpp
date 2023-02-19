#include<iostream>
#include <stack>
using namespace std;

int main() {

    // creation of stack
    stack<int> s;

    // push insert
    s.push(2);
    s.push(3);
    s.push(4);

    // pop operation
    s.pop();

    cout << "top element in the stack is " << s.top() << endl;

    if(s.empty()) {
        cout << "stack is empty " << endl;
    }
    else {
        cout << "stack is not empty " << endl;
    }

    cout << "size of the stack is " << s.size() << endl;


    return 0;
}