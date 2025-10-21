// link - //link-https://cses.fi/problemset/task/1073

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
    ll n,i,s=0,d;   
   multiset<int>m;
   cin>>n;
   for(i=0;i<n;i++)    {
    cin>>d;
    auto it=m.upper_bound(d);
    if(it==m.end()){
        s++;
    }
    else {
        m.erase(it);
    }
    m.insert(d);
   }

   cout<<s<<"\n";


  return 0;
}
