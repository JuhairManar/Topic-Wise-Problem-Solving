// link - https://www.codechef.com/problems/MINMXOR

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
   int n,i,xr=0;
   cin>>n;
   vector<int>v(n);
   for(auto &g:v){
    cin>>g;
    xr^=g;
   }      
   int mn=xr;
   for(auto g:v){
    mn=min(mn,xr^g);
   } 

   cout<<mn<<"\n";
    
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
