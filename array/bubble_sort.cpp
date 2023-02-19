#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size)
{
    for(int i=1; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main()
{
    int arr[6] = {7,6,9,12,0,6};
    bubbleSort(arr,6);
    cout << "sorted array : ";
    printArray(arr,6);
    return 0;

} 