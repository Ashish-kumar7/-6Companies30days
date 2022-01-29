long long power(int n,int r)
    {
       if(r==1)return n;
       long long ans=power(n,r/2)%1000000007;
       ans=(ans*ans)%1000000007;
       if(r&1)
       {
           ans=(ans*n)%1000000007;
       }
       return ans;
        
    }