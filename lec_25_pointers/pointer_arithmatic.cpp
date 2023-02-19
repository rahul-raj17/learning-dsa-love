#include<iostream>
using namespace std;
int main() {
    
    int i = 5;
    int *t = &i;

    *t = *t + 1;
    cout << *t << endl; 

    cout << "before " << t << endl;
    t = t + 1;
    cout << "after " << t << endl;
}