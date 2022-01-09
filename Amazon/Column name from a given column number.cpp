string colName (long long int n)
    {
        // your code here
        string ans="";
        while(n>0){
            char c='A' + (n-1)%26;
            n=(n-1)/26;
            ans=c+ ans;
            
        }
        return ans;
    }