int solve(int n,int A[],int sum){
        bool dp[n+1][sum+1];
       
        for(int j=0;j<=sum;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        dp[0][0]=1;
        // func(arr, )
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(j<A[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=(dp[i-1][j-A[i-1]] || dp[i-1][j]);
                }
            }
        }
        if(dp[n][sum]){
            return 1;
        }
        else{
            return 0;
        }
        
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        
         int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2==0){
            sum=floor(sum/2);
            int x=solve(N,arr,sum);
            return x;
        }
        else{
            return 0;
        }
    }