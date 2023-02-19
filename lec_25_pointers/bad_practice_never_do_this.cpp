#include<iostream>
using namespace std;
int main() {

    // pointer to int is created, and pointing to some garbage address
    // int *p ;

    // cout << *p << end;

    // int *q=0;
    // cout << *q << endl;

    // can do this 
    // following both are same 
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0; //null pointer
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    
    return 0;
}