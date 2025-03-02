// link - https://codeforces.com/problemset/problem/816/B

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,k,q,a,b,i,r=200004;
    cin>>n>>k>>q;
    vector<long>v1(r,0),v2(r,0);
    for(i=0;i<n;i++){
        cin>>a>>b;
        v1[a]++;
        v1[b+1]--;
    }             

    for(i=1;i<r;i++){
        v1[i]=v1[i-1]+v1[i];
        if(v1[i]>=k) v2[i]=1;
    }                    

    for(i=1;i<r;i++) v2[i]=v2[i-1]+v2[i];

    while(q--){
        cin>>a>>b;
        cout<<v2[b]-v2[a-1]<<"\n";
    }


  return 0;
}
