#include<iostream>
using namespace std;
int main() {
    /* int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0; //null pointer
    p = &i;

    cout << p << endl;
    cout << *p << endl; */

    int num = 5;
    int a = num;
    cout << "a before  " << num << endl;
    a++;
    cout << "a after  " << num << endl;
    // cout << a << endl;

    int *p = &num;
    cout << "before  " << num << endl;
    (*p)++;
    cout << "after  " << num << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;


}