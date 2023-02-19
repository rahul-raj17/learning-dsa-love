class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a,a+n);
        int start = 0;
        int end = n-1;
        int k =0;
        while(k < n) {
            answer[k] = a[start];
            k++;
            start++;
            answer[k] = a[end];
            k++;
            end--;
        }
    }
};