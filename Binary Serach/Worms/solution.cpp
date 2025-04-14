// link - https://codeforces.com/problemset/problem/474/B

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,q,i,d;
    cin>>n;
    vector<ll>v(n+1,0);
    for(i=1;i<=n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }                
    
    cin>>q;
    while(q--){
        cin>>d;
        cout<<lower_bound(v.begin(),v.end(),d)-v.begin()<<"\n";
    }


  return 0;
}
