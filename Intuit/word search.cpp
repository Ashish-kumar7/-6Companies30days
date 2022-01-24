bool fun(vector<vector<char>>& board, string word, int idx, int i, int j, vector<vector<bool>>& visited){
        if(idx==word.length()) return true;
        if(visited[i][j]==1) return false;
        if(board[i][j]!=word[idx]) return false;
        visited[i][j]=1;
        bool a=0, b=0, c=0, d=0;
        if(i>0){
            a=fun(board, word, idx+1, i-1, j, visited);
        }
        if(i<board.size()-1){
            b=fun(board, word, idx+1, i+1, j, visited);
        }
        if(j>0){
            c=fun(board, word,idx+1, i, j-1, visited);
        }
        if(j<board[i].size()-1){
            d=fun(board, word, idx+1, i, j+1, visited);
        }
        // cout<<"a = "<<a<<" b = "<<b<<" c "<<c<<" d "<<d<<endl;
        visited[i][j]=0;
        return a||b||c||d;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>> visited (n, vector<bool> (m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(fun(board, word, 0, i, j, visited))
                    return true;
            }
        }
        return false;
    }