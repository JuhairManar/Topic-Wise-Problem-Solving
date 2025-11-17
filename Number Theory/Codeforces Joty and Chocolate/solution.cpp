// link - https://codeforces.com/problemset/problem/678/C

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
   ll n,i;       
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
   ll n,a,b,p,q,s=0;
   cin>>n>>a>>b>>p>>q;
   if(p<q){
    swap(a,b);
    swap(p,q);
   }

   s+=(n/a)*p;
   s+=(n/b)*q;
//    cout<<s<<endl;
   ll lcm=(a*b)/__gcd(a,b);
//    cout<<(n/lcm)*q<<endl;
   s-=(n/lcm)*q;

   cout<<s;


  return 0;
}
