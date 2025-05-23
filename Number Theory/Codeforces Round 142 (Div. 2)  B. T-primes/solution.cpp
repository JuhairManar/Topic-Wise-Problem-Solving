//link-https://codeforces.com/problemset/problem/230/B

// Brute force time complexity-        t-10^5 * n-10^12 - 10^17      - Causes TLE
// Better optimized time complexity-   t-10^5 * n-10^6 - 10^11       - Causes TLE
// Best optimized time complexity -    t-10^5 * n-10^3 - 10^8        - Accepted
// smallest T Prime is 4

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

    ll n,i,r;
    cin>>n;

    if(n<=2){
        cout<<"NO\n";
        return ;
    }

    if(floor(sqrt(n))!=ceil(sqrt(n))){
        cout<<"NO\n";
        return ;
    }

    r=sqrt(n);

    if(r==2){
        cout<<"YES\n";
        return;
    }

    if(r%2==0){
        cout<<"NO\n";
        return ;
    }

    for(i=3;i*i<=r;i+=2){
        if(r%i==0){
            cout<<"NO\n";
            return ;
        }
    }

    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n;
    cin>>n;
    while(n--){
        solve();
    }                                    


  return 0;
}
