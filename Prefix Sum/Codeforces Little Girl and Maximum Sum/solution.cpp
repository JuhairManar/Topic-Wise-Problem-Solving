// link - https://codeforces.com/problemset/problem/276/C


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   ll n,i;       
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n,q,i,j;
    cin>>n>>q;
    vector<int>v(n),pre(n+2,0),dec;
    for(auto &g:v) cin>>g;
    while(q--){
        int a,b;
        cin>>a>>b;
        pre[a]++;
        pre[b+1]--;
    }

    for(i=1;i<=n;i++){
        pre[i]+=pre[i-1];
        dec.pb(pre[i]);
    }

    sort(v.begin(),v.end());
    sort(dec.begin(),dec.end());

    ll s=0;
    for(i=0;i<n;i++){
        s+=((ll)v[i]*(ll)dec[i]);
    }

    cout<<s<<"\n";


  return 0;
}
