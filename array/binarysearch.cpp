#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end)/2;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        // go to right wala part
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        // left wala part
        else 
        {
            end = mid - 1;
        }
        // mid = (start + end)/2;
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int evenArr[8] = {12,15,17,20,35,45,65,87};
    int oddArr[5] = {3,8,11,14,16};

    int evenIndex = binarySearch(evenArr, 8, 15);
    cout<<"index of 15 is "<< evenIndex <<endl;

    int oddIndex = binarySearch(oddArr, 5, 11);
    cout<<"index of 11 is "<< oddIndex <<endl;

    return 0;
    
}