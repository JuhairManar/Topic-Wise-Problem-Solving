// link - https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1

// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>dis(V,1e8);
        dis[src]=0;
        int i,j,a,b,c;
        for(i=1;i<V;i++){
            for(auto g:edges){
                a=g[0];b=g[1],c=g[2];
                if(dis[a]==1e8) continue;
                if(dis[a]+c<dis[b]) dis[b]=dis[a]+c;
            }
        }
        for(auto g:edges){
                a=g[0];b=g[1],c=g[2];
                if(dis[a]==1e8) continue;
                if(dis[a]+c<dis[b]) return {-1};
        }
        
        return dis;
        
    }
};
