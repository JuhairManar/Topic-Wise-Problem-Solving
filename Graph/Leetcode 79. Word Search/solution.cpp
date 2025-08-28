// link- https://leetcode.com/problems/word-search/


class Solution {
public:
    vector<int>dx,dy;
    int n,m;
    bool find(vector<vector<char>>& board,vector<vector<int>>&vis,string &ts,string& word,int x,int y,int c){
        if(ts.size()==word.size()){ 
            return 1;
        }
        bool f=0;
        vis[x][y]=1;
        int i,j,nx,ny;
        for(i=0;i<4;i++){
            nx=dx[i]+x;
            ny=dy[i]+y;

            if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==0 && board[nx][ny]==word[c]){
                ts.push_back(word[c]);
                f=find(board,vis,ts,word,nx,ny,c+1);
                if(f) return f;
                
            }
        }
        vis[x][y]=0;
        ts.pop_back();
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
        dx={0,0,-1,1};
        dy={1,-1,0,0};
        n=board.size();
        m=board[0].size();
        if(word.size()>n*m) return 0;
        int i,j,f=0;
        cout<<word.size()<<endl;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    string ts;
                    ts.push_back(word[0]);
                    f=find(board,vis,ts,word,i,j,1);
                    if(f) return f;
                }
            }
        }

        return f;
    }
};
