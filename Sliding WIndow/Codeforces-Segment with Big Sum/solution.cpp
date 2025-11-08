// link - https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
 
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
 
void solve(){
   ll n,i;       
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,k,i=0,j,mn=1e17,s=0;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &g:v) cin>>g;
 
    for(j=0;j<n;j++){
        s+=v[j];
        while(i<n && s>=k){
            mn=min(mn,j-i+1);
            s-=v[i];
            i++;
        }
    }
    if(mn==1e17) cout<<"-1";
    else cout<<mn;
 
 
  return 0;
}
