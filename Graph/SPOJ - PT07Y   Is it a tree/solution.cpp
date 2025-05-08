// link - https://www.spoj.com/problems/PT07Y/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void dfs(vector<vector<int>>&v,vector<int> &vis,vector<int>&par,int root){
    vis[root]=1;
    for(auto g:v[root]){
        if(!vis[g]){
            dfs(v,vis,par,g);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n,m,i,a,b,c=0;
    cin>>n>>m;
    vector<vector<int>>v(n+1);
    vector<int>vis(n+1,0),par(n+1,0);
    for(i=0;i<m;i++){
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }              
    
    if(n!=m+1){
        cout<<"NO";
    }

    else{
        // looking for more than one connected components

        for(i=1;i<=n;i++){
            if(!vis[i]){
                c++;
                if(c>1){
                    cout<<"NO\n";
                    return 0;
                }
                dfs(v,vis,par,i);
            }
        }
        cout<<"YES";
    }


  return 0;
}
