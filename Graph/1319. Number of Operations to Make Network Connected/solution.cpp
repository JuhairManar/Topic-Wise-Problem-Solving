// link - https://leetcode.com/problems/number-of-operations-to-make-network-connected/

class Solution {

    void dfs(vector<vector<int>>&v,vector<int>&vis,int i){
        vis[i]=1;

        for(auto g:v[i]){
            if(!vis[g]) dfs(v,vis,g);
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& con) {
        int i,j,c=0,m=con.size();
        vector<vector<int>>v(n);
        vector<int>vis(n,0);

        for(auto g:con){
            v[g[0]].push_back(g[1]);
            v[g[1]].push_back(g[0]);
        }

        for(i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(v,vis,i);
            }
        }
        cout<<c<<endl;
        if(n>m+1) return -1;
        return c-1;

    }
};
