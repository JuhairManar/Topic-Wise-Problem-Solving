// link - https://codeforces.com/contest/1294/problem/B

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
 
void solve(){
    int n,i,j,a,b,f=0;
    cin>>n;
    string s;
    vector<pair<int,int>>v;
    for(i=0;i<n;i++){
        cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end());
    pair<int,int> p={0,0};
    for(i=0;i<n;i++){
        if(v[i].first<p.first || v[i].second<p.second){
            cout<<"NO\n";
            return;
        }
        a=v[i].first-p.first;
        b=v[i].second-p.second;
        // cout<<a<<"    "<<b<<endl;
        s+=string(a,'R');
        s+=string(b,'U');
        p=v[i];
    }
    cout<<"YES\n";
    cout<<s<<"\n";
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
