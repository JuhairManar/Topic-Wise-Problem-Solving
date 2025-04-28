// link - https://codeforces.com/problemset/problem/2063/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    long l,r,c;
    cin>>l>>r;

    if(l==1 && r==1) cout<<"1\n";
    else cout<<r-l<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }


  return 0;
}
