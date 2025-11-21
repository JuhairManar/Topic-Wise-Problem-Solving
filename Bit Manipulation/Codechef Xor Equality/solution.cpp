// link- https://www.codechef.com/problems/XOREQUAL


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
#define mod 1000000007
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll pw_ans(ll a,ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll ans=pw_ans(a,b/2);
    if(b&1) return ((ans*ans*a)%mod);
    return (ans*ans)%mod;
}
void solve(){
   ll n,i,ans;       
   cin>>n;
    ans=pw_ans(2,n-1);
    // cout<<ans<<endl;
    ans%=mod;
    cout<<ans<<"\n";
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
