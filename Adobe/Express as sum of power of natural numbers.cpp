 vector<vector<long long>> dp;
    long long util(int n,int x,int val){
        if(n==0)return 1;
        else if(val==0)return 0;
        // cout<<n<<" "<<val<<endl;
        int mod = 1000000007;
        long long &ans = dp[n][val];
        if(ans != -1) return ans%mod;
        long long power = pow(val, x);
        
        return ans = ((n - power >= 0 ? util(n - power, x, val - 1): 0) + util(n, x, val - 1))%mod;
    }
    int numOfWays(int n, int x)
    {
        int mx = pow(n,1.0/x);
        // cout<<mx<<endl;
        dp.resize(n + 1, vector<long long>(mx+ 1, -1));
        long long ans = util(n,x,mx);
        int mod = 1000000007;
        ans+=mod;
        // cout<<ans<<endl;
        ans%=mod;
        return (int)ans;
    }