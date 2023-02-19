vector<int> inversePermutation(int arr[], int size) {
    
    vector<int> ans(size);
    
    for(int i = 0; i < size; i++) {
        ans[arr[i]-1]=i+1;
    }
    return ans;