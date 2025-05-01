// link - https://codeforces.com/contest/552/problem/B

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
    ll n,i,s=0,a,c=1,b;
    cin>>n;
    for(i=1;i<=n;i*=10){
        a=min((i*10)-1,n);
        // cout<<a<<endl;
        a=a-i+1;
        // cout<<a<<endl;
        s+=(a*c);
        c++;
    }      
    
    cout<<s;
 
 
  return 0;
}
