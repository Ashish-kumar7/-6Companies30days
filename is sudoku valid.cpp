int isValid(vector<vector<int>> board){
        // code here
        int R = board.size();
    int C = board[0].size();
    
    unordered_map<int ,int> rows[9];
    unordered_map<int,int> columns[9];
    unordered_map<int,int> boxes[9];
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            int ch = board[i][j]; //current cell
            
            if(ch != 0 && (rows[i][ch]++ > 0 || columns[j][ch]++ > 0 || boxes[i/3*3+j/3][ch]++ > 0))
                return false;
        }
    }
    return true;
    }