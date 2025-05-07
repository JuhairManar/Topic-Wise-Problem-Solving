// link -https://lightoj.com/problem/back-to-underworld

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void dfs(vector<vector<long>>&v,vector<long>& vis,vector<long>& in_col, vector<long>& ca,long root){
    if(vis[root]) return;
    vis[root]=1;

    for(auto g:v[root]){
        if(!vis[g]){
            in_col[g]=!in_col[root];
            ca[in_col[g]]++;
            dfs(v,vis,in_col,ca,g);
        }
    }

}

void solve(){
    vector<vector<long>>v(20001);
    vector<long>vis(20001,0),in_col(20001,-1),ca(2,0);

    long n,m,i,a,b,mx=1,mn=20001,s=0;
    cin>>m;
    while(m--){
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
        mx=max({mx,a,b});
        mn=min({mn,a,b});
    }
    // in_col[mn]=0;
    for(i=mn;i<=mx;i++){
        if(!vis[i]){
            in_col[i]=0;
            ca[0]++;
            dfs(v,vis,in_col,ca,i);
            s+=max(ca[0],ca[1]);
        }
    }

    cout<<s<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t,i=1;
    cin>>t;

    while(t--){
        cout<<"Case "<<i<<": ";
        solve();
        i++;
    }

  return 0;
}
