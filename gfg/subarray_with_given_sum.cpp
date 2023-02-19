class solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        // int a,b;
        vector<int>v;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i;j < n; j++) {
                sum = sum + arr[j];
                if(sum == s) {
                    // a = i;
                    // b = j;
                    v.push_back(i+1);
                    v.push_back(j+1);
                    return v;
                }
                if(sum > s) {
                    break;
                }
            }
        }
        v.push_back(-1);
        return v;
    }
};