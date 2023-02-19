#include<bits/stdc++.h>
using namespace std;

bool compare_string_by_length(string i, string j) {
    return (i.size() == j.size());
}

int main() {
    vector<int> v = {7, 8, 4, 1, 6, 5, 9, 4};
    sort(v.begin(), v.end());
    cout << binary_search(v.begin(), v.end(), 7) << endl; //print 1, boolean true
    cout << binary_search(v.begin(), v.end(), 555) << endl; 
    
    vector < string > s = {"test","abcde","efghijkl","abc"};
    cout << binary_search(s.begin(), s.end(), "pq", compare_string_by_length);
    /* search for the string in s which have same length as of "abcd" */

}