#include<iostream>
#include<stack>
using namespace std;

class Stack {
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    // contructor 
    // initialize stack
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size - top > 1) {
            // space is available in stack
            top++;
            arr[top] = element;
        }
        else {
            cout << "stack overflow " << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            // element is present in the stack
            top--;
        }
        else {
            cout << "stack underflow " << endl;
        }
    }

    int peek() {
        if(top >= 0 && top < size) {
            return arr[top];
        }
        else {
            cout << "stack is empty " << endl;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {

    Stack st(5);

    st.push(55);
    st.push(44);
    st.push(33);
    st.push(22);

    cout << "top element in stack is " << st.peek() <<endl;
    st.pop();
    cout << "top element in stack is " << st.peek() <<endl;
    st.pop();
    
    if(st.isEmpty()) {
        cout << "Stack is empty " << endl;
    }
    else {
        cout << "Stack is not empty " << endl;
    }
}