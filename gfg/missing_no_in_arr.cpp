class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        int s = 0;
        for(int i = 0; i < n; i++) {
            s++;
            if(s != array[i]) {
                return s;
            }
            
        }
    }
};