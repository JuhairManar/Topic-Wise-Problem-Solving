// link - https://cses.fi/alon/task/1620

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
    ll n,k,i,j,s,l=1,h=2e18,m,a=-1;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &g:v) cin>>g;


    while(l<=h){
        m=(l+h)/2;

        s=0;
        bool f=0;
        for(auto g:v){
            s+=(m/g);
            if(s>=k) break;
        }

        if(s<k){
            l=m+1;
        }
        else{
            a=m;
            h=m-1;
        }
    }

    cout<<a;

  return 0;
}
