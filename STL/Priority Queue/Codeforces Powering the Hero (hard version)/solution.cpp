// link - https://codeforces.com/contest/1800/problem/C2


#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    // cout<<"YES\n";
   int d,n,i;       
   cin>>n;
   ll s=0;
    priority_queue<int>q;
    for(i=0;i<n;i++){
        cin>>d;
        // cout<<"YES\n";
        if(d) q.push(d);
        else {
            if(q.size()){s+=(ll)q.top();
            q.pop();}
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
    while(t--) solve();


  return 0;
}
