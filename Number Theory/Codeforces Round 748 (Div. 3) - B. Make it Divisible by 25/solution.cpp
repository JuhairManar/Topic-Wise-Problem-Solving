// link - https://codeforces.com/problemset/problem/1593/B


#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>>s;
    int mn=20,i,j,n=s.size(),a;

    for(i=n-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            a=((s[j]-'0')*10)+(s[i]-'0');
            if(a%25==0){
                mn=min(mn,n-(i+1)+(i-j-1));
                break;
            }
        }
    }

    cout<<mn<<"\n";
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
