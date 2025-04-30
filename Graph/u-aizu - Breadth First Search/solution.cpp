// link - https://vjudge.net/contest/710539#problem/E


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n,u,k,i,d;
    cin>>n;
    vector<vector<int>>v(n+1);

    for(i=0;i<n;i++){
        cin>>u>>k;
        while(k--){
        cin>>d;
        v[u].push_back(d);
        }
    }
    
    vector<int>vis(n+1,0),lev(n+1,-1);
    queue<int>q;
    q.push(1);
    lev[1]=0;
    vis[1]=1;

    while(!q.empty()){
        d=q.front();
        q.pop();

        for(auto g:v[d]){
            // cout<<g<<endl;
            if(!vis[g]){
                // cout<<g<<endl;
                q.push(g);
                vis[g]=1;
                lev[g]=lev[d]+1;
            }
        }
    }

    for(i=1;i<=n;i++){
        cout<<i<<" "<<lev[i]<<"\n";
    }



  return 0;
}
