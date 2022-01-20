vector<int> subarraySum(int arr[], int n, long long s)
    {
         vector<int>ans;
        int i=0,j=0;
        long long curr=arr[0];
        while(j<n){
            if(curr<s){
                j++;
                if(j<n) curr+=arr[j];
                
            }
            else if(curr>s){
                curr-=arr[i];
                i++;
                if(i>j){
                    if(j+1<n) {
                        j++;
                        curr+=arr[j];
                        
                    }
                }
            }
            
            //cout<<i<<" "<<j<<" "<<curr<<endl;
            if(curr==s) break;
        }
        if(curr==s){
            ans.push_back(i+1);
            ans.push_back(j+1);
            return ans;
        }
        ans.push_back(-1);
        return ans;
       
        // Your code here
    }