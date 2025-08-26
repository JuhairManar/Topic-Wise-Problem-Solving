// link - https://leetcode.com/problems/island-perimeter/description/

// only lands with border with water or having border with the matrix have the border

class Solution {
public:

    int bfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int x,int y,int n,int m,int dx[],int dy[]){
        vis[x][y]=1;
        int i,j,nx,ny,c=0;
        queue<pair<int,int>>q;
        q.push({x,y});
        while(q.size()){
            pair<int,int>p=q.front();
            q.pop();

            x=p.first;
            y=p.second;

            for(i=0;i<4;i++){
                nx=x+dx[i];
                ny=y+dy[i];

                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1 && vis[nx][ny]==0){
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                }
                if(!(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1)) c++;
            }
        }

        return c;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),i,j,p,c;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int dx[]={0,0,-1,1},dy[]={1,-1,0,0};

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]){
                    c=bfs(grid,vis,i,j,n,m,dx,dy);
                    // cout<<c<<endl;
                    // p=(c*2)+2;
                    return c;
                }
            }
        }
        return 0;
    }

};
