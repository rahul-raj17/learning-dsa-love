#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}

void sortOne(int arr[], int size)
{
    int l = 0; 
    int r = size-1;
    int m = 0;

    while(m<=l)
    {
        if(arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1)
        {
            m++;
        }
        else if(arr[m] == 2)
        {
            swap(arr[m], arr[r]);
            r--;
        }
    }
    
    
}
int main()
{
    int arr[8] = {0,0,2,0,1,1,2,0};
    sortOne(arr,8);
    printArray(arr,8);
    return 0;
}