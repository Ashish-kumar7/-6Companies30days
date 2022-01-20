class Solution
{
    public:
    
    void solve(vector<string>&ans,int open,int close,string str,int n){
        if(str.size()==2*n){
            ans.push_back(str);
        }
        if(open<n){
            solve(ans,open+1,close,str + '(' , n);
        }
        if(close<open){
            solve(ans,open,close+1,str + ')' , n);
        }
        
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        solve(ans,0,0,"",n);
        
        return ans;
    }
};