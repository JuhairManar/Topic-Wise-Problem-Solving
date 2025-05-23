// link - https://codeforces.com/problemset/problem/115/A

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
    int n,i,d,mx=1;
    cin>>n;
    
    vector<vector<int>>v(n);
    vector<int>vis(n,0),lev(n,1);
    queue<int>q;
    for(i=1;i<=n;i++){
        cin>>d;

        if(d==-1){
            q.push(i-1);
            vis[i-1]=1;
        }
        else{
            v[i-1].pb(d-1);
            v[d-1].pb(i-1);
        }
        
    }
    while(!q.empty()){
        d=q.front();
        q.pop();
        for(auto g:v[d]){
            if(!vis[g]){
                q.push(g);
                vis[g]=1;
                lev[g]=lev[d]+1;
                mx=max(mx,lev[g]);
            }
        }
    }

    cout<<mx;

  return 0;
}
