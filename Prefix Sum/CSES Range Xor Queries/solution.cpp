// link - https://cses.fi/problemset/task/1650/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(long a[]){
    long l,r;
    cin>>l>>r;

    cout<<(a[r]^a[l-1])<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,k,i;
    cin>>n>>k;
    long a[n+1],v[n+1];
    // v[0]=0;
    a[0];    
    
    for(i=1;i<=n;i++){
        cin>>a[i];
        a[i]=a[i]^a[i-1];
    }

    while(k--){
        solve(a);
    }


  return 0;
}
