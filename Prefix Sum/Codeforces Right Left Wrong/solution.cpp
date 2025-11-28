// link- https://codeforces.com/problemset/problem/2000/D


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int n,i,j;
    cin>>n;
    vector<int>v(n+1,0);
    vector<ll>pre(n+5,0);
    for(i=1;i<=n;i++) cin>>v[i];
    for(i=1;i<=n;i++) pre[i]=pre[i-1]+v[i];
    string s;
    cin>>s;
    i=0;j=n-1;
    ll sm=0;1
    while(i<j){
        if(s[i]!='L') i++;
        else if(s[j]!='R') j--;
        else{
            sm+=pre[j+1]-pre[i];
            i++;j--;
        }
    }

    cout<<sm<<"\n";    
    
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
