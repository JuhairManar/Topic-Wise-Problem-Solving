#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,k,s=0,i,j,mx=0;
    cin>>n>>k;
    long a[n];
    for(i=0;i<n;i++) cin>>a[i];
    j=0;
    i=0;
    while(j<n){
        while(j<n && s+a[j]<=k){
            s+=a[j];
            mx=max(mx,j-i+1);
            j++;
        }
        s-=a[i];
        i++;
    }
    cout<<mx;


  return 0;
}
