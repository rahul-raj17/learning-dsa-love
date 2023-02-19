class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<int>v;
        sort(arr,arr+n);
        for(int i=0; i<n; i++) {
            if(arr[i]%2 != 0) {
                v.push_back(arr[i]);
            }
        }
        
        reverse(v.begin(),v.end());
        
        for(int i=0; i<n; i++) {
            if(arr[i]%2 == 0) {
                v.push_back(arr[i]);
            }
        }
        
        for(int i=0; i<v.size(); i++) {
            arr[i] = v[i];
        }
    }
};