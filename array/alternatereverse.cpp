#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for(int i=0; i<size; i+=2)
    {
         if(i+1 < size)
      {
        swap(arr[i], arr[i+1]);
        // int temp = arr[i+1];
        // arr[i+1] = arr[i];
        // arr[i] = temp;
        
      }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,13,5,8,6};

    swapAlternate(even,8);
    swapAlternate(odd,5);

    printArray(even,8);
    printArray(odd,5);
    return 0;
}