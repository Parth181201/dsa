
// Recursion
public:
    int count = 0;
  
    void solve(vector<int>&A , int target,int sum,int index,int n){
        
        //Base Condition
        if(index==n){
            if(sum==target){
                count++;
            }
            
            return;
        }
        
        solve(A,target,sum+A[index],index+1,n);
        solve(A,target,sum-A[index],index+1,n);
        
        return;
    }
    
    
    int findTargetSumWays(vector<int>&A ,int target) {
        solve(A,target,0,0,A.size());
        
        return count;
    }


//Recursion + Memoisation