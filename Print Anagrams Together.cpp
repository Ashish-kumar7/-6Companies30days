vector<vector<string> > Anagrams(vector<string>& vec) {
        //code here
        unordered_map<string,vector<string>>mp;
        
        for(int i=0;i<vec.size();i++){
            string str=vec[i];
            sort(str.begin(),str.end());
            mp[str].push_back(vec[i]);
        }
        
        vector<vector<string>>ans;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            vector<string>temp=it->second;
            ans.push_back(temp);
        }
        
        return ans;
    }