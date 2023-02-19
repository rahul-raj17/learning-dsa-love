#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k) {
    // base case
    if(s > e)  //condition for element not found
    return false;

    int mid = s + (e - s)/2;
    if(arr[mid] == k) //condition for element found
    return true;

    // recursive call
    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[5] = {4,7,1,2,10};
    int keyElement = 2;

    int ans = binarySearch(arr,0,5,keyElement);

    if(ans) {
        cout << "element is present " << endl;
    }
    else {
        cout << "element is not present " << endl;
    }

}