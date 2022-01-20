int lengthOfLongestAP(int A[], int n) {
        // code here
        
        vector<unordered_map<int,int>> storeDiff;
        
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> temp;
            storeDiff.push_back(temp);
        }
        
        
        if(n==1)
            return 1;
            
        int ans=2;
            
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int diff=A[i]-A[j];
                
                //finding the difference if it exists in the jth map
                if(storeDiff[j].find(diff)!=storeDiff[j].end())
                {
                    int count=storeDiff[j][diff];
                    //including the current element
                    count++;
                    ans=max(ans,count);
                    
                    storeDiff[i].insert({diff,count});
                }
                else
                {
                    storeDiff[i].insert({diff,2});
                }
            }
        }
        
        return ans;
        
    }