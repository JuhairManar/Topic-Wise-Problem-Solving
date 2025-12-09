// link - https://cses.fi/problemset/task/2183/

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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll t,n,i,s=0;
    cin>>n;
    vector<ll>v(n);
    for(auto &g:v) cin>>g;

    sort(v.begin(),v.end());

    for(auto g:v){
        if(s+1<g){
            cout<<s+1;
            return 0;
        }
        s+=g;
    }

    cout<<s+1;


  return 0;
}
