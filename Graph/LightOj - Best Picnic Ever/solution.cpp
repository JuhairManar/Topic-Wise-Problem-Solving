// link - https://lightoj.com/problem/best-picnic-ever


#include<bits/stdc++.h>
using namespace std;

#define ll long long


void BFS(vector<vector<int>>&v,int source,vector<int>&snv,int n){
    vector<int>vis(n+1,0);
    queue<int>q;
    q.push(source);
    vis[source]=1;

    while(!q.empty()){
        int f=q.front();
        q.pop();
        snv[f]++;

        for(auto g:v[f]){
            if(!vis[g]){
                q.push(g);
                vis[g]=1;
            }
        }
    }
}

void solve(int a){
    int k,n,m,i,mx=0,c=0;
    cin>>k>>n>>m;
    vector<int>snv(n+1,0),sn(k);
    vector<vector<int>>v(n+1);

    for(i=0;i<k;i++) cin>>sn[i];
    while(m--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }


    for(auto g:sn){
        BFS(v,g,snv,n);
    }

    for(auto g:snv){
        if(g==k) c++;
    }

    cout<<"Case "<<a<<": "<<c<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        solve(i);
    }                                    


  return 0;
}
