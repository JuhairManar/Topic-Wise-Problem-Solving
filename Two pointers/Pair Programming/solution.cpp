// link - https://codeforces.com/problemset/problem/1547/C 


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
   int n,a,b,i,j,d;
   cin>>n>>a>>b;
   vector<int>ans,va(a),vb(b);
   for(i=0;i<a;i++)  {
    cin>>va[i];
   }    
   for(i=0;i<b;i++)  {
    cin>>vb[i];
   }  
   int c=n;
   i=0;j=0;
   while(i<a || j<b){
    if(i<a && va[i]<=n){
        ans.pb(va[i]);
        if(va[i]==0) n++;
        i++;
    }
    else if(j<b && vb[j]<=n){
        ans.pb(vb[j]);
        if(vb[j]==0) n++;
        j++;
    }
    else{
        cout<<"-1\n";
        return;
    }
   }
   for(auto g:ans) cout<<g<<" ";
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
    while(t--) solve();


  return 0;
}
