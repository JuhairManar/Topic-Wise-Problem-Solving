// link - https://codeforces.com/problemset/problem/61/E

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T> using rev_ordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,i;       
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,i,j,s=0;
    cin>>n;
    vector<ll>v(n),pre(n);
    for(auto &g:v) cin>>g;

    rev_ordered_set<ll>st1;

    // 4 3 1 
    for(i=0;i<n;i++){
        st1.insert(v[i]);
        pre[i]=st1.order_of_key(v[i]);
    }

    
    ordered_set<ll>st2;

    for(i=n-1;i>=0;i--){
        st2.insert(v[i]);
        s+=st2.order_of_key(v[i])*pre[i];
    }

    cout<<s<<"\n";


  return 0;
}


// int less=p.order_of_(a[j]);
//    int big=p.size()-less;
//    ans+=(big*inv[j]);
