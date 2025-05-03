// link - https://codeforces.com/contest/727/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
bool f;

bool solve(ll a,ll b,vector<ll>&v){
    if(a>b) return 0;
    if(a==b){
        f=1;
        v.pb(a);
        return 1;
    }
    bool x=solve(a*2,b,v);
    if(x==0) {
        bool y=solve((a*10)+1,b,v);
        if(y==1) v.pb(a);
    }
    else {
        v.pb(a);
    }

    if(v.size()) return 1;
    return 0;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll a,b;
    cin>>a>>b;
    vector<ll>v;
    // f=false;
    bool w=solve(a,b,v);       
    
    if(w){
        cout<<"YES\n"<<v.size()<<"\n";
        for(auto it=v.rbegin();it!=v.rend();it++) cout<<*it<<" ";
        // for(auto g:v) cout<<g<<" ";
    }
    else{
        cout<<"NO\n";
    }



  return 0;
}
