// link - https://atcoder.jp/contests/abc066/submissions/61662188

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,i;
    cin>>n;
    vector<long>v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
    }  

    for(i=n-1;i>=0;i-=2){
    cout<<v[i]<<" ";
    }
    // cout<<"Firest loop ends\n";

    i=(n%2)?1:0;
    for(i;i<n;i+=2){
        cout<<v[i]<<" ";
    }

  return 0;
}
