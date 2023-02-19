#include<iostream>
#include<map>
using namespace std;

class Node {
     
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d) {
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp; 
}

void insertAtTail(Node* &tail, int d) {
    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

bool detectLoop(Node* head) {
    if(head == NULL) {
        return false;
    }

    map<Node* , bool>visited;
    Node* temp = head;

    while(temp != NULL) {
        // cycle is present
        if(visited[temp] == true) {
            cout << "present on element " << temp -> data << " " << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

int main() {

    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);

    print(head);
    
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail,head, 4, 22);
    print(head); 

    tail -> next = head -> next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;


    if(detectLoop(head)) {
        cout << "Loop is present " << endl;
    }   
    else {
        cout << "Loop is not present " << endl;
    }

    // cout << "head " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;
}