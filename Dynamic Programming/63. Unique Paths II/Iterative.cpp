class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {

        int n=grid.size(),m=grid[0].size(),i,j;
        vector<vector<int>>v(n,vector<int>(m,0));

        if(grid[0][0]) {
                v[0][0]=0;
        }
        else{ 
            v[0][0]=1;
        }

        for(i=1;i<n;i++){
            if(grid[i][0] || v[i-1][0]==0) {
                v[i][0]=0;
            }
            else {
                
                v[i][0]=1;
            }

        }
        for(i=1;i<m;i++){
            if(grid[0][i] || v[0][i-1]==0) v[0][i]=0;
            else {
                v[0][i]=1;
            }
        }

        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(grid[i][j]){
                    v[i][j]=0;
                    
                    continue;
                } 
                v[i][j]=v[i-1][j]+v[i][j-1];
            }
        }

        return v[n-1][m-1];
    }
};
