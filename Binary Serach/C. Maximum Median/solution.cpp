// link - https://codeforces.com/problemset/problem/1201/C

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

// 1 2 3 4 4 4 4
// void solve(){
//    ll n,i,k,mx,s=0,ce=(n+1)/2;      
//    cin>>n>>k;
//    vector<ll>v(n);
//    for(auto &g:v) cin>>g;
   
//    sort(v.begin(),v.end());
//    mx=v.back();

//    for(i=n/2;i<n;i++){
//     s+=v[i];
//    }

//    ll sme=ce*mx;
//    k-=(sme-s);
//    if(k<0){
//     cout<<v[n/2]<<"\n";
//     return;
//    }

//    ll med=mx;

//    med+=(k/ce);

//    cout<<med<<"\n";
    
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,i,k,mx,s=0,ce=(n+1)/2,l=1,r=1e10,m,ans;      
   cin>>n>>k;
//    ce=(n+1)/2;
   vector<ll>v(n);
   for(auto &g:v) cin>>g;
   
   sort(v.begin(),v.end());
   
   while (l<=r)
   {
      m=l+(r-l)/2;

      s=0;

      for(i=n/2;i<n;i++){
         s+=(v[i]<=m)?m-v[i]:0;
         if(s>k) break;
      }

      if(s<=k){
         l=m+1;
         ans=m;
      }
      else r=m-1;
   }

   cout<<ans;
    

  return 0;
}
