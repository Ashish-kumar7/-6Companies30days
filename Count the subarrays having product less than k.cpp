int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
           if (k == 0) return 0;
        int j=0;
        long long ans=0, product=1;
        for(int i=0; i<n; i++)
        {
            product*=a[i];
            while(product>=k && j<=i)
            {
                product/=a[j];
                j++;
            }
            ans+=(i-j+1);
        }
        return (int)ans;
    }