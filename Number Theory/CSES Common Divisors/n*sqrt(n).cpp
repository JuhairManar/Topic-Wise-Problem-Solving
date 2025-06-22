// link - https://cses.fi/problemset/task/1081


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
    int n,i,j,mx=0,sq,mxc=0;
    cin>>n;

    vector<int>a(n);

    for(i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
    }


    vector<int>v(mx+1,0);


    for(auto g:a){
        for(j=1;j*j<=g;j++){
            if(g%j==0){
                v[j]++;
                if(j!=g/j){
                    v[g/j]++;
                }
            }
        }
    }

    for(i=mx;i>=1;i--){
        if(v[i]>1){
            cout<<i;
            return 0;
        }
    }




  return 0;
}
