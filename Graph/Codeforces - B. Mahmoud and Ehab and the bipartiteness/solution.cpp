// link - https://codeforces.com/problemset/problem/862/B


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void color(vector<vector<ll>>&v,vector<vector<ll>>&cg,vector<ll> &vis,vector<ll>& col,ll i){
    vis[i]=1;

    for(auto g:v[i]){
        if(!vis[g]){
            col[g]=!col[i];
            cg[!col[i]].pb(g);
            color(v,cg,vis,col,g);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,a,b,i,s=0;
    cin>>n;
    vector<vector<ll>>v(n),cg(2);
    vector<ll>vis(n,0),col(n,-1);
    for(i=1;i<n;i++){
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }  

    cg[0].pb(0);
    col[0]=0;
    color(v,cg,vis,col,0);


    for(auto g:cg[0]){
        s+=cg[1].size()-v[g].size();
    }

    // cout<<endl;
    cout<<s;


  return 0;
}
