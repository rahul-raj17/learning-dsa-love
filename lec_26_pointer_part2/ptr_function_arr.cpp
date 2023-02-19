#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    cout << endl << "size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {

    int arr[6] = {1,2,3,4,5,8};

    cout << "sum is " << getSum(arr+3, 3) ;

    return 0;
}