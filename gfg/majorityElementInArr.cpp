class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        sort(a,a+size);
        int cnt = 0;
        for(int i=0; i<size; i++) {
            if(a[i] == a[size/2])
            cnt++;
        }
        if(cnt > size/2) {
            return a[size/2];
        }
        else {
            return -1;
        }
    }
};