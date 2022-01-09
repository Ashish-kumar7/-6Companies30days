int maxProfit(int k, int n, int A[]) {
        int dp[k+1][n];
        
        
        for(int i=0;i<=k;i++){
            int maxi=INT_MIN;
            for(int j=0;j<n;j++){
                if( i==0 || j==0 ) dp[i][j]=0;
                else{
                    maxi=max(maxi,(dp[i-1][j-1]-A[j-1]));
                    dp[i][j]=max(dp[i][j-1],maxi+A[j]);
                }
                
                
            }
        }
        return dp[k][n-1];
        
    }