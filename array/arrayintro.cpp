#include<iostream>
using namespace std;


int main()
{
    int number[15]; //declare

    cout<<"value at 14 index "<< number[14] <<endl; //accessing an array

    int second[3] = {5,7,11};  //initiallization an array

    cout<<"value at 2 index "<< second[2] <<endl; //accessing an element

    int third[15] = {2,7};

    int n;
    n = 15;

    cout<<"printing an array "<<endl;
    //print an array
    for(int i=0;i<n;i++)
    {
        cout<< third[i] <<" ";
    }
    cout<<endl;
    //initiallizing all location with 0
    int fourth[10] = {0};

    n=10;

    cout<<"printing an array "<<endl;
    //print an array

    for(int i=0;i<n;i++)
    {
        cout<< fourth[i]<<" ";
    }



    return 0;


}