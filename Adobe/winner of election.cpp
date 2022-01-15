vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int maxi=INT_MIN;
        string ans;
        
        
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>maxi){
                maxi=it->second;
                ans=it->first;
            }
        }
        
        vector<string>res;
        
        res.push_back(ans);
        res.push_back(to_string(maxi));
        
        return res;
    }