#include <iostream>
using namespace std;


// int sqrtN(long long int N)
// {
    // Write your code here.
    int binarySearch(long long int n) {
        int s = 0;
        int e = n;
        int mid = s + (e - s)/2;
        int ans = -1;
        
        while(s <= e) {
            int square = mid * mid;
            if(square > n) {
                e = mid - 1;
            }
            else if(square < n) {
                ans = mid;
                s = mid + 1;
            }
            else if(square == n) {
                return mid;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
    
    // int mySqrt(int x) {
    //     return binarySearch(x);
    // }
// }

int mySqrt(int x) {
        return binarySearch(x);
    }
// int main()
// {
//     return 0;
// }