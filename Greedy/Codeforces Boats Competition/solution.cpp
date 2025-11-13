// link - https://codeforces.com/problemset/problem/1399/C

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
   int n,i,j,mx=0;
   cin>>n;
   vector<int>v(n);
   for(auto &g:v) cin>>g;
   
    for(i=1;i<=100;i++){
      int c=0;
      map<int,int>m;
      for(j=0;j<n;j++){
        int g=v[j];
        if(m[i-g]>0){
          c++;
          m[i-g]--;
        }
        else{
          m[g]++;
        }
      }
      mx=max(mx,c);
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
