// link - https://cses.fi/problemset/task/1680


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void dfs(vector<vector<long>>&v,vector<long>&vis,vector<long>&ts,long i){
    vis[i]=1;

    for(auto g:v[i]){
        if(!vis[g]){
            dfs(v,vis,ts,g);
        }
    }

    ts.pb(i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        
    long n,m,mx=0,a,b,i;
    cin>>n>>m;
    vector<vector<long>>v(n+1);
    vector<long>vis(n+1,0),lev(n+1,0),par(n+1,-1),ind(n+1,0),ts;
    while(m--){
        cin>>a>>b;
        v[a].pb(b);
        // v[b].pb(a);
    }
    
    

    for(i=1;i<=n;i++){
        if(!vis[i]){
            dfs(v,vis,ts,i);
        }
    }
    reverse(ts.begin(),ts.end());

    // for(auto g:ts) cout<<g<<" ";
    // cout<<endl;
    lev[1]=1;
    for(auto g:ts){
        // cout<<g<<" ";
        if(lev[g]<1){
            // cout<<g<<" "<<lev[g]<<endl;
            // cout<<"Continue\n";
            continue;
        }
        for(auto h:v[g]){
            if(lev[h]<lev[g]+1) {
                lev[h]=lev[g]+1;
                par[h]=g;
                // cout<<h<<" "<<lev[h]<<endl;
            }
        }
    }

    // cout<<endl;
    if(lev[n]<1) {
        // cout<<lev[n]<<endl;
        cout<<"IMPOSSIBLE";
        return 0;
    }
    else{
        cout<<lev[n]<<"\n";
        // cout<<n<<" ";
        i=0;
        stack<long>st;
        while(n!=-1){
            // cout<<n<<" ";
            st.push(n);
            n=par[n];
            // i++;
            // if(n==1) break;
        }

        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }






  return 0;
}
