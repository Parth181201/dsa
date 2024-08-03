class Solution{
public:

    int partition(int arr[] , int N , int sum , vector<vector<int>> &dp)
    {
        
        if(dp[N][sum] != -1)  return dp[N][sum];
        
        if(arr[N-1] <=sum)
        {
            return dp[N][sum] =  partition(arr , N-1 , sum - arr[N-1] , dp) || partition(arr , N-1 , sum , dp); 
        }
        
        else
        {
            return dp[N][sum] = partition(arr , N-1 , sum , dp);
        }
        
        
        
    }
    


    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        
        for(int i = 0 ;  i<N ; i++)
        {
            sum += arr[i];
        }
        
        if(sum%2 != 0) return 0;
        
        sum = sum/2;
        
        
        vector<vector<int>> dp(N+1 , vector<int>(sum +1 , -1));
        
        
        // if array size 0 all sums are 0
        for(int i = 0 ; i <=sum ; i++)
        {
            dp[0][i] = 0;
        }
        
        //if sum 0 then 
        
        for(int i = 0 ; i <= N ; i++)
        {
            dp[i][0] = 1;
        }
        
        
        return partition(arr , N , sum ,dp);
    }
};