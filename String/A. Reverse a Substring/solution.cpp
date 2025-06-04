// link - https://codeforces.com/contest/1155/problem/A

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
    long n,i;
    cin>>n;
    string s;
    cin>>s;
    
    for(i=1;i<n;i++){
        if(s[i]<s[i-1]){
            cout<<"YES\n";
            cout<<i<<" "<<i+1;
            return 0;
        }
    }

    cout<<"NO";

  return 0;
}
