// link - https://cses.fi/alon/task/1666/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void dfs(vector<vector<long>>&v,vector<long>&vis,long i){
    vis[i]=1;
    for(auto g:v[i]){
        if(!vis[g]) dfs(v,vis,g);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        
    long n,m,a,b,i,c=0;
    cin>>n>>m;
    vector<vector<long>>v(n+1);
    vector<long>vis(n+1,0);
    // vector<pair<long,long>>vp;
    vector<long>vp;

    while(m--){
        cin>>a>>b;

        v[a].pb(b);
        v[b].pb(a);
    }

    for(i=1;i<=n;i++){
        if(!vis[i]){
            c++;
            vp.pb(i);
            dfs(v,vis,i);
        }
    }

    cout<<c-1<<"\n";

    for(i=0;i<vp.size()-1;i++){
        cout<<vp[i]<<" "<<vp[i+1]<<"\n";
    }

  return 0;
}
