class Solution {
public:
  int maxDistance(vector<vector<int>>& grid) {
    int ly = grid.size(), lx  = grid[0].size();
    int Y = ly - 1, X = lx - 1;
    vector<vector<int>> v(ly, vector<int>(lx, INT_MAX));
    
    queue<pair<int,int>>q;
    for(int y = 0; y != ly; y++)
      for(int x = 0; x != lx; x++)
        if(grid[y][x] == 0 && ((y && grid[y-1][x]) || (y != Y && grid[y+1][x]) || (x && grid[y][x-1]) || (x != X && grid[y][x+1]))) 
		q.push({y,x}), v[y][x] = 1;                      
          
    if(q.empty()) return -1;
    int w = 0;
    while(!q.empty()){
      w++;                                 
      int n = q.size();
      while(n--){
        auto[y,x] = q.front(); q.pop();                
                
        if(y      && grid[y-1][x] == 0 && v[y-1][x] > w) q.push({y-1,x}), v[y-1][x] = w;
        if(y != Y && grid[y+1][x] == 0 && v[y+1][x] > w) q.push({y+1,x}), v[y+1][x] = w;
              
        if(x      && grid[y][x-1] == 0 && v[y][x-1] > w) q.push({y,x-1}), v[y][x-1] = w;
        if(x != X && grid[y][x+1] == 0 && v[y][x+1] > w) q.push({y,x+1}), v[y][x+1] = w;
      } 
    }  
    return w; 
  }
};