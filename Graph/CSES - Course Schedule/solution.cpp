// link - https://cses.fi/problemset/task/1679


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
}

void bfs(vector<vector<long>> &v ,vector<long> &id,vector<long>& vis, vector<long> &ans){
    long i,root;
    queue<long>q;
    for(i=1;i<=id.size();i++){
        if(id[i]==0){
            q.push(i);
            vis[i]=1;
        }
    }
    // ans.pb(root);
    while(!q.empty()){
        root=q.front();
        q.pop();
        ans.pb(root);

        for(auto g:v[root]){
            id[g]--;
            if(!vis[g] && id[g]==0){
                vis[g]=1;
                q.push(g);
                id[g]--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,m,a,b,i;
    cin>>n>>m;
    vector<vector<long>>v(n+1);   
    vector<long>id(n+1,0),vis(n+1,0),ans;
    while(m--){
        cin>>a>>b;
        v[a].push_back(b);
        id[b]++;
    }

    bfs(v,id,vis,ans);
    if(ans.size()!=n){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    for(auto g:ans) cout<<g<<" ";


                                     


  return 0;
}
