// link - https://codeforces.com/problemset/problem/762/A


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    ll n,k,i,ts;
    cin>>n>>k;

    vector<ll>v1,v2;

    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v1.pb(i);
            if(i!=n/i) v2.pb(n/i);
        }
    }

    reverse(v2.begin(),v2.end());
    ts=v1.size()+v2.size();
    v1.insert(v1.end(),v2.begin(),v2.end());
    if(k<=v1.size()) cout<<v1[k-1];
    else if(k<=ts) cout<<v2[ts-k-1];
    else cout<<"-1";


  return 0;
}
