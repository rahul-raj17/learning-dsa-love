#include<iostream>
using namespace std;
int main() {

    int arr[] = {23,122,41,67};

    cout << "address of first location : " << arr << endl;
    cout << "value at 0th index : " << arr[0] << endl;
    cout << "address at location 0th index : " << &arr[0] << endl;
    cout << "value at first location : " << *arr <<  endl;
    cout << "value at second location : " <<*(arr + 1) << endl;
    cout << *arr + 1 << endl;
    cout << arr[2] << endl;
    cout << "value at third location : " << *(arr + 2) << endl;

    int i = 3;
    cout <<"value at 3rd index : " << i[arr] << endl;
    cout << "value at 3rd index : " << *(i+arr) << endl;
}