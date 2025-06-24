// link - https://codeforces.com/contest/1916/problem/B

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll x,y;
    cin>>x>>y;

    if(y%x==0){
        cout<<((y/x)*y);
    }
    else{
        cout<<x*(y/__gcd(x,y));
    }   
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        
     int t;
    cin>>t;

    while(t--){
        solve();
    }


  return 0;
}
