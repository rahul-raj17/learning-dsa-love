#include<iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
}
int main()
{
    int arr[5] = {45,12,47,5,0};
    // int n = sizeof(arr)/sizeof(arr[0]); 
    selectionsort(arr,5);
    cout << "sorted array"<< endl;
    printArray(arr,5);
    return 0;


}