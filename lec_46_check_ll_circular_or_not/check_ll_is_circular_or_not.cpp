#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // ~Node() {
    //     int value = this -> data;
    //     if(this->next != NULL) {
    //         delete next;
    //         next = NULL;
    //     }
    //     cout << "memory is free for node with data " << value << endl;
    // }
};

void insertNode(Node* &tail, int element, int d) {
    // empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else {
        // non empty list
        Node* curr = tail;
        while(curr -> data != element) {
            curr = curr -> next;
        }
        
        // element found -> curr is representing element
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

bool isCircularOrNot(Node* &head) {
    Node* temp = head -> next;
    while(temp!=NULL && temp!=head) {
        temp = temp -> next;
    }

    if(temp == NULL) {
        return false;
    }
    else if(temp == head) {
        return true;
    }
}

void print(Node* tail) {
    Node* temp = tail;

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;
}

int main() {
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,6);
    print(tail);

    insertNode(tail,3,7);
    print(tail);

    if(isCircularOrNot) {
        cout << "Linked List is circular " << endl;
    }
    else {
        cout << "Linked List is not circular " << endl;
    }
}    