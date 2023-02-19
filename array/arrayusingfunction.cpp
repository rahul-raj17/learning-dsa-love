#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    cout<<"printing an array "<<endl;
    //print array
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<" printing done "<<endl;
}

int main()
{
    int number[15]; //declare

    cout<<"value at 14 index "<< number[14] <<endl; //accessing an array

    int second[3] = {5,7,11};  //initiallization an array

    cout<<"value at 2 index "<< second[2] <<endl; //accessing an element

    int third[15] = {2,7};

    int n;
    n = 15;

    printArray(third,15);
    //initiallizing all location with 0
    int fourth[10] = {0};

    n=10;

   printArray(fourth,10);

   int fourthSize = sizeof(fourth)/sizeof(int);
   cout<<"size of fourth is "<< fourthSize <<endl;

   //print character
   char ch[5] = {'s','r','p','v','t'};
   cout<<ch[3]<<endl;
   cout<<"printing character "<<endl;
   for(int i=0;i<5;i++)
   {
    cout<<ch[i]<<" ";
   }



    return 0;
}