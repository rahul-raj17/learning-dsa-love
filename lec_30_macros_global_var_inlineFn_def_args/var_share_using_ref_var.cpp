#include<iostream>
using namespace std;

void a(int& i) {

    cout << i << endl;

}

void b(int& i) {

    cout << i << endl;

}

int main() {

   
    int i = 5;
    a(i);
    b(i);

    return 0;
}