// link - https://codeforces.com/problemset/problem/1793/C

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   ll n,i,l,r;       
   cin>>n;
   vector<int>v(n+1); 
   ll mn=1,mx=n;
   l=1;r=n;
   for(i=1;i<=n;i++) cin>>v[i];
    if(n<4){
        cout<<"-1\n";
        return;
    }
   while(l<r){
    bool f=1;
    if(v[l]==mn){
        l++;mn++;f=0;
    }
    else if(v[l]==mx){
        l++;mx--;f=0;
    }

    if(v[r]==mn){
        r--;mn++;f=0;
    }
    else if(v[r]==mx){
        r--;mx--;f=0;
    }

    if(f){
        cout<<l<<" "<<r<<"\n";
        return;
    }
   }

   cout<<"-1\n";
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
