class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>v;
        v.push_back({triangle[0][0]});
        int n=triangle.size(),i,j,m;

        for(i=1;i<n;i++){
            m=triangle[i].size();
            vector<int>nv;
            for(j=0;j<m;j++){
                if(j==0){
                    nv.push_back(triangle[i][j]+v[i-1][0]);
                    continue;
                }

                if(j==m-1){
                    nv.push_back(triangle[i][j]+v[i-1][v[i-1].size()-1]);
                    continue;
                }

                nv.push_back(triangle[i][j]+min(v[i-1][j-1],v[i-1][j]));
            }

            v.push_back(nv);
        }

        int mn=v[v.size()-1][0];
        n=v.size()-1;
        for(auto g:v[n]){
            mn=min(g,mn);
        }

        return mn;
    }
};
