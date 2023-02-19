
int findDuplicate(int A[])
{
    // Your code goes here
  
    int count = 1;
    for(int i = 0; i < 9; i++ ) {
        
        if(A[i] == A[i+1]) {
            count++;
            if(count == 5) {
                return A[i];
            }
           
        }
    }
    return 0;
    
}