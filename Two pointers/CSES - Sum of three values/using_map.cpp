// link- https://cses.fi/problemset/task/1641

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
     int n,x,a,b,c,i,j,k;
    cin>>n>>x;
    vector<int>v(n+1,0);
    map<int,int>m;
    for(i=1;i<=n;i++)cin>>v[i];

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            a=x-v[i]-v[j];
            if(m.find(a)!=m.end()){
                cout<<i<<" "<<j<<" "<<m[a];
                return 0;
            }
        }
        m[v[i]]=i;
    }
    cout<<"IMPOSSIBLE";

  return 0;
}
