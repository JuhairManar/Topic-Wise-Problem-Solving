// link - https://cses.fi/alon/task/2428



#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,k,i,j,ans=0;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &g:v) cin>>g;

    map<ll,ll>m;
    i=0;
    for(j=0;j<n;j++){
        m[v[j]]++;

        while((ll)m.size()>k){
            m[v[i]]--;
            if(m[v[i]]==0) m.erase(v[i]);
            i++;
        }

        ans+=(j-i+1);

        // cout<<ans<<endl;
    }
    cout<<ans<<"\n";


  return 0;
}
