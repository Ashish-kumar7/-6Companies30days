class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back({edges[i][1],succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        
        
        vector<double> prob(n,0);
        priority_queue<pair<double,int>> pq;
        pq.push({1,start});
         
        while(!pq.empty()){
            auto [p,node]=pq.top(); pq.pop();
            
            if(node==end) return p;
            
            for(auto [nei,pnei]:graph[node]){
                 if(pnei*p>prob[nei]){
                     prob[nei]=pnei*p;
                     pq.push({prob[nei],nei});
                 }
                
            }
             
        }
        
        return 0;
        
    }
};