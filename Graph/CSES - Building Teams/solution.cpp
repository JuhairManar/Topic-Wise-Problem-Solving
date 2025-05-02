//link-https://cses.fi/problemset/task/1668


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void dfs(long s,vector<vector<long>>&v,vector<long>&vis,vector<long>&at){
    if(vis[s]) return ;
    vis[s]=1;

    for(auto g:v[s]){
        if(at[g]!=-1 && at[g]==at[s]){
            cout<<"IMPOSSIBLE";
            exit(0);
        }
        if(at[g]==-1){
            at[g]=!at[s];
        }
        dfs(g,v,vis,at);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,m,i,a,b;
    cin>>n>>m;
    vector<vector<long>>v(n);
    vector<long>vis(n,0),at(n,-1);
    while(m--)  {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }                  
    // at[0]=0;
    // dfs(0,vis,at);

    for(i=0;i<n;i++){
        if(at[i]==-1){
            at[i]=0;
            dfs(i,v,vis,at);
        }
    }
    for(auto g:at) cout<<g+1<<" ";


  return 0;
}
