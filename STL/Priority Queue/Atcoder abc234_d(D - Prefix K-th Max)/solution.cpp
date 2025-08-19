// link - https://atcoder.jp/contests/abc234/tasks/abc234_d

#pragma GCC optimize("Ofast")
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
    int n,k,i;
    cin>>n>>k;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    priority_queue<int, vector<int>,greater<int>> pq;         
    for(i=0;i<k;i++) pq.push(v[i]);
    cout<<pq.top()<<"\n";
    for(i;i<n;i++){
        pq.push(v[i]);
        pq.pop();
        cout<<pq.top()<<"\n";
    }                       


  return 0;
}
