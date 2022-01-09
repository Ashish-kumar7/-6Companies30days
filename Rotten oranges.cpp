class Solution {
public:
    
    struct location {
        int i,j,time;
    };
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<location>q;
        
        int di[4] = {-1, 0, 1, 0};
        int dj[4] = {0, 1, 0, -1};
        
        
        int m=grid.size();
        int n=grid[0].size();
        
        location t;
        location node;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    t.i=i;
                    t.j=j;
                    t.time=0;
                    q.push(t);
                }
            }
        }
        int res=0;
        int pos_i;
        int pos_j;
        
        while(!q.empty()){
            
            for(int i=q.size()-1;i>=0;i--){
                t=q.front();
                q.pop();
                res=max(res,t.time);
                for(int j=0;j<4;j++){
                    pos_i=t.i + di[j];
                    pos_j=t.j + dj[j];
                    if(pos_i>=0 && pos_j>=0 && pos_i<m && pos_j<n && grid[pos_i][pos_j]==1){
                        node.i=pos_i;
                        node.j=pos_j;
                        node.time=t.time + 1;
                        q.push(node);
                        grid[pos_i][pos_j]=2;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return res;
        
    }
};