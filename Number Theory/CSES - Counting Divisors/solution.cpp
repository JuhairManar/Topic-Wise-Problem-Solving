// link - https://cses.fi/problemset/task/1713


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
    
    vector<int>v((1e6)+1,1);

    ll i,j,x=1e6,n,q;
    for(i=2;i<=x;i++){
        v[i]++;
        for(j=i*2;j<=x;j+=i){
            v[j]++;
        }
    }

    cin>>q;
    while(q--){
        cin>>n;

        cout<<v[n]<<"\n";
    }


  return 0;
}
