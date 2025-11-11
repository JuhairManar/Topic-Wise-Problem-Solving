// link - https://www.codechef.com/problems/PARTSCORE?tab=statement


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
   int n,i,e=0,o=0,d,s;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>d;
    if(d&1) o++;
    else e++;
   }     

   if(o==0){
    cout<<"0\n";
    return;
   }

   s=1+e+((o-1)/2);
   cout<<s<<"\n";
    
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
