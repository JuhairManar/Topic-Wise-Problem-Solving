// link -https://codeforces.com/problemset/problem/1843/B

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   ll n,i,s=0,c=0,f=0;
   cin>>n;
   vector<ll>v(n);
   for(i=0;i<n;i++){
    cin>>v[i];
    s+=abs(v[i]);

    if(v[i]<0 && f==0){
        c++;
        f=1;
    }
    else if(v[i]>0) f=0;


   }    
    cout<<s<<" "<<c<<"\n";   
    
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
