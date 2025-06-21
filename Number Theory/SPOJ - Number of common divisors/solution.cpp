// link - https://www.spoj.com/problems/COMDIV/

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    int a,b,c,i,s=0;
    cin>>a>>b;

    c=__gcd(a,b);

    for(i=1;i*i<=c;i++){
        if(c%i==0){
            if(i!=c/i) s+=2;
            else s++;
        }
    }

    cout<<s<<"\n";
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
