#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // int a[n];

    /*
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    map<int , int> m;
    for(int i=0; i<n; i++) {
        m[a[i]]++;
    }
    */
    
    map<int , int> m;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    for(auto it : m) {
        cout << "frequency of " << it.first << " is " << it.second << endl;
    }
}