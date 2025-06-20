// link - https://codeforces.com/problemset/problem/1690/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int d,n,s,r,a,b,c;
    cin>>n;
    r=n%3;
    d=n/3;

    a=d;
    b=d+1;
    c=d-1;

    if(r==1) b+=1;
    else if(r==2){
        b++;a++;
    }

    cout<<a<<" "<<b<<" "<<c<<"\n";
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
