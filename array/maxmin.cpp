// #include<iostream>
// #include <climits>
// using namespace std;

// //finding maximum value
// int getMax(int num[], int n)
// {

//     int max = INT_MIN;

//     for(int i=0; i<n; i++)
//     {
//         if(num[i] > max)
//         {
//             max = num[i];
//         }
//     }

//     //returning max value
//     return max;
// }

// //finding minimum value
// int getMin(int num[], int n)
// {
//     int min = INT_MAX;

//     for(int i=0; i<n; i++)
//     {
//         if(num[i] < min)
//         {
//             min = num[i];
//         }

//         //returning minimum value
//         return min;
//     }
// }
// int main()
// {
//     int size;
//     cin >> size;

//     int num[100];

//     //taking input in array
//     for(int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }

//     cout << "maximum value is " << getMax(num, size)<<endl;

//     cout << "minimum value is " << getMin(num, size) << endl;

//     return 0; 
// }









#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n) {

    int min = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        // min = min( min, num[i]);
        
        if(num[i] < min){
           min = num[i];
        }
    }

    //returning min value
    return min;
}

int getMax(int num[], int n) {

    int max = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        // max = max(max, num[i]);

       if(num[i] > max){
           max = num[i];
       }
    }

    //returning max value
    return max;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}