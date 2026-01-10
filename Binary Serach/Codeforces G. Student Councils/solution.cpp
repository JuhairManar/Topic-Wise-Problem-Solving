// link - https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G

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

bool cc(vector<ll>&v,ll mid,ll k){
  ll s=0;
  for(auto g:v){
    if(g>mid) s+=mid;
    else s+=g;
  }

  return s>=k*mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,k,i,s,l=1,r=50,ans=0,mid;
    cin>>k>>n;
    vector<ll>v(n);
    for(auto &g:v) cin>>g;

    while(l<=r){
      mid=l+(r-l)/2;

      if(cc(v,mid,k)){
        ans=mid;
        l=mid+1;
      }
      else r=mid-1;
      // cout<<mid<<" "<<ans<<endl;
    }

    cout<<ans;

  return 0;
}
