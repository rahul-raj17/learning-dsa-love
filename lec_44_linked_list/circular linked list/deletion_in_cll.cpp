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

    ~Node() {
        int value = this -> data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
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

void deleteNode(Node* &tail, int value) {
    // empty list
    if(tail == NULL) {
        cout << "list is empty , please check again " << endl;
        return ;
    }
    else {
        // non empty
        // assuming that "value" is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // for single node linked list
        if(curr == prev) {
            tail = NULL;
        }

        // for >=2 node linked list
        else if(tail == curr) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "list is empty ";
        return;
    }

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

    insertNode(tail,7,10);
    print(tail);


    insertNode(tail,10,44);
    print(tail);

    insertNode(tail,3,12);
    print(tail);

    deleteNode(tail,10);
    print(tail);

    deleteNode(tail,3);
    print(tail);
}    