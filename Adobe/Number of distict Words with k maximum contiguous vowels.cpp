 int m=1e9+7;
    ll t[1001][1001];
    ll solve(int n,int cnt,int k){
        if(n==0) return 1;
        if(t[n][cnt]!=-1) return t[n][cnt];
        ll ans;
        if(cnt==k) ans=21*(solve(n-1,0,k)%m);
        else ans=21*(solve(n-1,0,k)%m)+5*(solve(n-1,cnt+1,k)%m);
        ans=(ans+m)%m;
        return t[n][cnt]=ans;
    }
    int kvowelwords(int N, int K) {
        memset(t,-1,sizeof(t));
        return solve(N,0,K)%m;
    }