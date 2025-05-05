// link -https://cses.fi/problemset/task/1131

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
    long n,a,b,i,j,mx=0,mn1,mn2;
    cin>>n;
    vector<vector<long>>v(n+1);
    for(i=1;i<n;i++){
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }             
    
    vector<long>vis(n+1,0),lev(n+1,0);
    queue<long>q;
    q.push(1);
    vis[1]=1;
    while (!q.empty())
    {
        long t=q.front();
        q.pop();

        for(auto g:v[t]){
            if(!vis[g]){
                q.push(g);
                lev[g]=lev[t]+1;
                vis[g]=1;
                if(lev[g]>mx){
                    mx=lev[g];
                    mn1=g;
                }
            }
        }
    }
    fill(vis.begin(),vis.end(),0);
    fill(lev.begin(),lev.end(),0);
    q.push(mn1);
    vis[mn1]=1;

    while (!q.empty())
    {
        long t=q.front();
        q.pop();

        for(auto g:v[t]){
            if(!vis[g]){
                q.push(g);
                lev[g]=lev[t]+1;
                vis[g]=1;
                if(lev[g]>mx){
                    mx=lev[g];
                    mn2=g;
                }
            }
        }
    }

    cout<<mx;

  return 0;
}
