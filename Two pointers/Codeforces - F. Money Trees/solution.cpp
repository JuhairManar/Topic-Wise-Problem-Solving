// link- https://codeforces.com/problemset/problem/1873/F


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   int n,k,i,j,mx=0,s=0;
   cin>>n>>k;
   vector<int>am(n+1,0),hg(n+1,0);
   for(i=1;i<=n;i++) cin>>am[i]; 
   for(i=1;i<=n;i++) cin>>hg[i]; 

   i=1;
   for(j=1;j<=n;j++){
    if(hg[j-1]%hg[j]==0) s+=am[j];
    else s=am[j],i=j; 

    while(s>k && i<=n) s-=am[i],i++;
    mx=max(j-i+1,mx);
   }
   
   cout<<mx<<"\n";
    
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
