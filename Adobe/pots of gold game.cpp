int solve(vector<vector<int>> &dp,vector<int>&A,int i,int j){
        if(i>j) dp[i][j]=0;
        if(i==j) dp[i][j]=A[i];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int start=A[i]+min(solve(dp,A,i+2,j),solve(dp,A,i+1,j-1));
        int end=A[j]+ min(solve(dp,A,i+1,j-1),solve(dp,A,i,j-2));
        return dp[i][j]=max(start,end);
        
    }
    
    int maxCoins(vector<int>&A,int n)
    {
	    
	   vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
	   
	    return solve(dp,A,0,n-1);
	    
    }