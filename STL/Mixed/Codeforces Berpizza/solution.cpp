// link - https://codeforces.com/contest/1468/problem/C

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

struct cmp {
    bool operator()(pair<int,int>p1,pair<int,int>p2) {
        if(p2.first>p1.first) return 1;
        if(p2.first==p1.first){
            if(p2.second<p1.second) return 1;
            return 0;
        }
        return 0;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t,c=1;
    cin>>t;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    queue<int>q;
    vector<int>vis(1e6,0);
    while(t--) {
        int a,b;
        cin>>a;
        if(a==1){
            cin>>b;
            pq.push({b,c});
            q.push(c);
            c++;
        }
        else if(a==2){
            int x=q.front();
            while(vis[x]){
                q.pop();
                x=q.front();
            }
            vis[x]=1;
            q.pop();
            cout<<x<<" ";
        }
        else {
            int x=pq.top().second;
            while(vis[x]){
                pq.pop();
                x=pq.top().second;
            }
            vis[x]=1;
            pq.pop();
            cout<<x<<" ";
        }
    }


  return 0;
}
