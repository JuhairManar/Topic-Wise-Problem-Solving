// link - https://onlinejudge.org/external/106/p10608.pdf


#include<bits/stdc++.h>
using namespace std;

#define ll long long

void dfs(ll node,vector<vector<ll>> &v,vector<ll>&vis,ll &c){
    if(vis[node]) return;

    vis[node]=1;
    c++;
    for(auto g:v[node]){
        dfs(g,v,vis,c);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll t,n,m;
    cin>>t;
    
    while(t--){
        cin>>n>>m;
        vector<vector<ll>>v(n+1);
        ll mx=1;
        while(m--){
            ll a,b,i;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        vector<ll>vis(n+1,0);
        for(ll i=1;i<=n;i++){
            if(!vis[i]){
                ll c=0;
                dfs(i,v,vis,c);
                mx=max(mx,c);
            }
        }

        cout<<mx<<"\n";
    }


  return 0;
}
