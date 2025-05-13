// link - https://cses.fi/problemset/task/1679

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void dfs(vector<vector<long>>&v,vector<long>&vis,vector<long>&tp,long i,vector<long>& par,vector<bool>&cp){
    vis[i]=1;
    cp[i]=true;

    for(auto g:v[i]){
        if(!vis[g]) {
            par[g]=i;
            dfs(v,vis,tp,g,par,cp);
        }
        else{
            if(g!=par[g] && cp[g]){
                // cout<<"YES\n";
                // cout<<g<<endl;
                cout<<"IMPOSSIBLE";
                exit(0);
            }
        }
    }
    cp[i]=false;
    tp.pb(i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    long n,m,a,b,i;
    cin>>n>>m;

    vector<vector<long>>v(n);
    vector<long>vis(n,0),tp,par(n,-1);
    vector<bool>cp(n,false);

    while(m--){
        cin>>a>>b;
        v[--a].pb(--b);
    }

    for(i=0;i<n;i++){
        if(!vis[i]){
            dfs(v,vis,tp,i,par,cp);
        }
    }


    if(tp.size()!=n) cout<<"IMPOSSIBLE";
    else{
        // cout<<tp.size()<<endl;
        // cout<<"YES\n";
        for(auto it=tp.rbegin();it!=tp.rend();it++) cout<<(*it)+1<<" ";
    }




  return 0;
}
