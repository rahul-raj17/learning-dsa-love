#include<iostream>
using namespace std;

// this is abad practice, never do this
/*// int& func(int a) {
    
//     int num = a;
//     int &ans = num;
//     return ans;
// }

// int* fun(int n) {
//     int* ptr = &n;
//     return ptr;
// } */

int update1(int n) {
    n++;
}

int update2(int& n) {
    n++;
}

int main() {
    int n = 5;

    cout << "before " << n << endl;

    update2(n);
    cout << "after " << n << endl;

    // func(n);
    // cout << n << endl;
    // fun(n);

    return 0;
}