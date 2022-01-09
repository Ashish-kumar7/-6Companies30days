bool canPair(vector<int> A, int k) {
        // Code here.
          map<int,int>mp;
        int n=A.size();
        
    for(int i=0;i<n;i++){
        int x=( (A[i]%k) +k )%k;
        mp[x]++;
    }
    
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->first==0){
            if(it->second %2 ==1){
                return 0;
            }
        }
        else{
            int p=it->first;
            int q=k-p;
            if(mp[p]!=mp[q]){
                return 0;
            }
        }
    }
    return 1;
    }