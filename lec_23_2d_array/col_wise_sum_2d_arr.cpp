#include<iostream>
using namespace std;

//to print row wise sum
// void printSum(int arr[][3],int row,int col) {

//     cout << "printing sum wise row " << endl;
//     for(int row = 0; row < 3; row++) {
//         int sum = 0;
//         for(int col = 0; col < 3; col++ ) {
//             sum = sum + arr[row][col];
//         }

//         cout << sum << " ";
//     }

//     cout << endl;
// }

//to print col wise sum
void printSum(int arr[][3],int row,int col) {

    cout << "printing sum wise row " << endl;
    for(int col = 0; col < 3; col++) {
        int sum = 0;
        for(int row = 0; row < 3; row++ ) {
            sum = sum + arr[row][col];
        }

        cout << sum << " ";
    }

    cout << endl;
}

int main() {
    int arr[3][3];

    cout << "enter the elements " << endl;
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cin >> arr[row][col];
        }
    }


    cout << "printing the array " << endl;
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++ ) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

   printSum(arr,3,3);
    
    return 0;
}