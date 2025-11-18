// link - https://codeforces.com/problemset/problem/1618/C


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,i,j,d,f1=1,f2=1;
   cin>>n;
   vector<ll>v1,v2,v;
   for(i=0;i<n;i++){
    cin>>d;
    v.pb(d);
    if(i&1) v2.pb(d);
    else v1.pb(d);
   }       

   ll gc1=v1[0],gc2=v2[0];
   for(i=1;i<v1.size();i++) gc1=__gcd(v1[i],gc1); 
   for(i=1;i<v2.size();i++) gc2=__gcd(v2[i],gc2); 

   for(i=1;i<n;i+=2){
    if(v[i]%gc1==0) {
        f1=0;
        break;
    }
   }
   if(gc1==1) f1=0;

   for(i=0;i<n;i+=2){
    // cout<<v[i]<<"\n";
    if(v[i]%gc2==0) {
        f2=0;
        break;
    }
   }
   if(gc2==1) f2=0;

//    cout<<gc1<<" "<<gc2<<"\n";
//    cout<<f2<<endl;
//    if(f1 || f2) cout<<max(gc1,gc2)<<"\n";
//    else cout<<"0\n";
   if(f1) cout<<gc1<<"\n";
   else if(f2) cout<<gc2<<"\n";
   else cout<<"0\n";
    
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
