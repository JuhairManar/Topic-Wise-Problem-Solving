//link - https://lightoj.com/problem/points-in-segments

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    // map<long,long>m;
    long n,k,q,a,i,b;
    cin>>n>>k;
    vector<long>v(n);
    for(i=0;i<n;i++) cin>>v[i];

    while(k--){
        cin>>a>>b;

        long s=lower_bound(v.begin(),v.end(),a)-v.begin(),e;
        if(binary_search(v.begin(),v.end(),b)!=-1){
            e=upper_bound(v.begin(),v.end(),b)-v.begin();
        }
        else e=(upper_bound(v.begin(),v.end(),b)-v.begin())-1;

        cout<<e-s<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t,i;
    cin>>t;

    vector<int>v{1,4,6,8,10};
    for(i=1;i<=t;i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }


  return 0;
}
