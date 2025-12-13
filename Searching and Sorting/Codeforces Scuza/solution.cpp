// link- https://codeforces.com/problemset/problem/1742/E

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
#define gf g.first
#define gs g.second
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,m,i,d,p=0;       
   cin>>n>>m;
   
   vector<ll>h(n+1,0),pre(n+2,0),ans(m);
   vector<pair<ll,ll>>que;
   for(i=1;i<=n;i++) cin>>h[i];

   for(i=1;i<=n;i++) pre[i]=pre[i-1]+h[i];
   for(i=0;i<m;i++){
    cin>>d;
    que.pb({d,i});
   }
   sort(que.begin(),que.end());

   for(auto g:que){
    ll a=gf,b=gs;
    while(p<=n && h[p]<=a){
      p++;
    }
    ans[b]=pre[p-1];
   }

   for(auto g:ans) cout<<g<<" ";
   cout<<"\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    while(t--) solve();


  return 0;
}
