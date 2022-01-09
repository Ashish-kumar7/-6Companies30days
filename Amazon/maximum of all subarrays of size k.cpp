vector <int> max_of_subarrays(int *A, int n, int k){
        vector<int>ans;
	    
	    deque<int>dq;
	    for(int i=0;i<n;i++){
	        
	        while(!dq.empty() && dq.front()<=i-k){
	            dq.pop_front();
	        }
	        
	        while(!dq.empty() && A[dq.back()]<A[i]){
	            dq.pop_back();
	        }
	        
	        dq.push_back(i);
	        
	        if(i>=k-1){
	            ans.push_back(A[dq.front()]);
	        }
	        
	    }
	    return ans;
    }