vector<int> leaders(int a[], int n){
        // Code here
        int A[n];
        vector<int>res;
        
        A[n-1]=a[n-1];
        res.push_back(a[n-1]);
        
        for(int i=n-2;i>=0;i--){
            A[i]=max(a[i],A[i+1]);
            if(a[i]==A[i]){
                res.push_back(a[i]);
            }
        }
        reverse(res.begin(),res.end());
        
        return res;
        
        
    }