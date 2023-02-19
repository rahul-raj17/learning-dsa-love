#include<iostream>
using namespace std;
int main() {

    // 1st diff i.e size

   /* int temp[10] = {54,123,23};

    cout << "1st  " << sizeof(temp) << endl;
    cout << "2nd  " << sizeof(*temp) << endl;
    cout << "3rd  " << sizeof(&temp) << endl;

    int *ptr = &temp[0];

    cout << "4th  " << sizeof(ptr) << endl;
    cout << "5th  " << sizeof(*ptr) << endl;
    cout << "6th  " << sizeof(&ptr) << endl; */


    // 2nd diff i.e. address

    /* int arr[10] = {12,13,24};
    cout << " -> " << &arr[0] << endl;
    // cout << &arr << endl;
    // cout << *arr << endl;

    int *p = &arr[0];
    cout << " -> " << &p << endl;
    // cout << *p << endl;
    // cout << p << endl; */


    // 3rd diff i.e symbol table

    int arr[10] ;
    // error
    // arr = arr + 1;

    int *p = &arr[0];
    cout << p << endl;
    p = p + 1;
    cout << p << endl;
    
}