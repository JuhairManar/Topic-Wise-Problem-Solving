// link - https://codeforces.com/problemset/problem/1006/C

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
    ll n,i,s1=0,s2=0,j,mx=0;
   cin>>n;      
    vector<ll>v(n);
    i=0;j=n-1;
    for(auto &g:v) cin>>g;
    while(i<=j){
        if(s1==s2){
            mx=max(mx,s1);
            if(i!=j){
                s1+=v[i];
                s2+=v[j];
            }
            else{
                s1+=v[i];
            }
            i++;j--;
        }
        else if(s1<s2) {
            s1+=v[i];
            i++;
        }
        else {
            s2+=v[j];
            j--;
        }
    }

    if(s1==s2){
        mx=max(mx,s1);
    }

    cout<<mx<<"\n";


  return 0;
}
