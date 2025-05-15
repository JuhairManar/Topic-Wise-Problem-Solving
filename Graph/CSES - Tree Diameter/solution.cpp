// link - https://vjudge.net/contest/710539#problem/M

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    long n,m,a,b,i,t;
    cin>>n;

    vector<vector<long>>v(n);
    vector<long>vis(n,0),lev(n,0);

    for(i=1;i<n;i++){
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }

    queue<long>q;
    q.push(0);
    vis[0]=1;

    while(!q.empty()){
        t=q.front();
        q.pop();


        for(auto g:v[t]){
            if(!vis[g]){
                vis[g]=1;
                q.push(g);
            }
        }
    }
    fill(vis.begin(),vis.end(),0);
    vis[t]=1;
    q.push(t);

    while(!q.empty()){
        t=q.front();
        q.pop();

        for(auto g:v[t]){
            if(!vis[g]){
                vis[g]=1;
                q.push(g);
                lev[g]=lev[t]+1;
            }
        }
    }

    cout<<lev[t];

  return 0;
}
