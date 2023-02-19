#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end)/2;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            // right wale part me jao
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            start = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
    

}

// same as above code
int lastOccurance(int arr[], int size , int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // code here changes
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int even[8] = {1,2,3,3,5,0,3,5};


    int i = firstOccurance(even,8,3);
    int l = lastOccurance(even, 8,3);
    cout << "First occurance of 3 is at index "<< i << endl;
    cout << "Last occurance of 3 is at index " << l <<endl;
    return 0;
}