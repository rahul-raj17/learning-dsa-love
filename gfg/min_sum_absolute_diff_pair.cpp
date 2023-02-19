class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        
        long long ans = 0;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0; i<A.size(); i++) {
            
            ans = ans + abs(A[i] - B[i]);
            
        }
        return ans;
        
    }
};