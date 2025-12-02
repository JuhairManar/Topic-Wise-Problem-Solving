// link - https://www.codechef.com/problems/BOWLERS


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
   ll n,i,k,l,d,r,j;
   cin>>n>>k>>l;
   
   if(k*l<n || (k==1 && n>1)){
    cout<<"-1\n";
    return ;
   }
   d=n/k;
   r=n%k;
   for(i=0;i<d;i++){
    for(j=1;j<=k;j++) cout<<j<<" ";
   }

   for(i=1;i<=r;i++) cout<<i<<" ";

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
