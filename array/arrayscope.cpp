#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "inside the function " << endl;

    arr[0] = 120;  //updaing array's first element

    //printing an array
    for(int i=0; i<3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "going to the main function "<< endl;
}
int main()
{
   int arr[3] = {1,2,3};

   update(arr,3);

   //printing the array

   cout << "printing the main function " <<endl;
   for(int i=0; i<3; i++)
   {
    cout<< arr[i] <<" ";
   } 

   return 0;


}