class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    
	    sort(arr,arr+N);

        int start = 0;
        int end = N-1;
        vector<int>v;
        while(start<end) {
            v.push_back(arr[end]);
            end--;
            
            v.push_back(arr[start]);
            start++;
        }
	    if(start==end) {
	        v.push_back(arr[end]);
	        end--;
	        return v;
	    }
	}

};