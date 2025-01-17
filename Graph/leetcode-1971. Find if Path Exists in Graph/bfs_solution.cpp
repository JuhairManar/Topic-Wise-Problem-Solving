class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination){
            return 1;
        }
        vector<vector<int>> adj (n+1);

        for(auto g:edges){
            adj[g[0]].push_back(g[1]);
            adj[g[1]].push_back(g[0]);
        }

        // bool a[n];
        // int a[n]={0};

        vector<bool> a(n+1,false);

        a[source]=true;

        queue<int>q;
        q.push(source);

        while(!q.empty()){
            for(auto g: adj[q.front()]){
                if(g==destination){
                    return true;
                }
                if(!a[g]){
                    a[g]=true;
                    q.push(g);
                }
            }
            q.pop();
        }

        return false;
    }
};
