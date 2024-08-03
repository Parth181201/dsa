int solve (int arr[],vector<int> &v,int n,int sum,int range,vector<vector<int>> &t){
        if(n==0){
            return abs(range-sum-sum);
        }
        
        if(t[n][sum]!=-1){
            return t[n][sum];
        }
        
        int pick = solve(arr,v,n-1,sum+arr[n-1],range,t);
        int notPick = solve(arr,v,n-1,sum,range,t);
        
        return t[n][sum] = min(pick,notPick);
    }
    
	int minDifference(int arr[], int n)  { 
	    vector<int> v;
	    int sum = 0;
	    
	    int range = 0;
	    
	    for(int i=0;i<n;i++){
	        range = range + arr[i];
	    }
	    
	    vector<vector<int>> t(n+1,vector<int>(range+1,-1));
	    
	    return solve(arr,v,n,sum,range,t);
	} 