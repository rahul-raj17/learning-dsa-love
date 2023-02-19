class Solution{
    public:
     vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        // Complete the function
        vector<int> v;
        for(int i = 0; i < q; i=i+2) {
            int left = queries[i];
            int right = queries[i+1];
            int sum = 0;
            int mean = 0;
            int count = right - left + 1;
            
            for(int j = left; j <= right; j++) {
                sum = sum + arr[j];
                mean = sum/count;
            }
            v.push_back(mean);
        }
        return v;
    }

};