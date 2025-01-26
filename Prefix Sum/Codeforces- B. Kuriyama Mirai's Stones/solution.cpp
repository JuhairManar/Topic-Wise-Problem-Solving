#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,m,t,l,r,i;
    cin>>n;
    vector<long>v(n);
    vector<ll>def(n+1,0),sor(n+1,0);
    for(i=0;i<n;i++) cin>>v[i];

    for(i=1;i<=n;i++) def[i]=def[i-1]+v[i-1];

    sort(v.begin(),v.end());

    for(i=1;i<=n;i++) sor[i]=sor[i-1]+v[i-1];         

    cin>>m;
    while(m--){
        cin>>t>>l>>r;
        if(t==1) cout<<def[r]-def[l-1]<<"\n";
        else cout<<sor[r]-sor[l-1]<<"\n";
    }              


  return 0;
}
