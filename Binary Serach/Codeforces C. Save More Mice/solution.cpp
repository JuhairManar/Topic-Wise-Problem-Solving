// link- https://codeforces.com/problemset/problem/1593/C

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
   ll n,i,k,cp=0,s=0;
   cin>>n>>k;
   vector<ll>v(k);
   for(auto &g:v) cin>>g;
   sort(v.begin(),v.end());
   
   while(v.size()){
    ll a=v.back();
    v.pop_back();
    if(cp>=a) break;
    cp+=(n-a);
    s++;
    // cout<<cp<<endl;
   }

   cout<<s<<"\n";
    
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
