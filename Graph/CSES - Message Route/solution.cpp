//link-https://cses.fi/problemset/task/1667
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m,u,v,i,t,f=1,c=1;
    cin>>n>>m;
    vector<long>adj_list[n+1];
    vector<long>vis(n+1,0),p(n+1,0),pv;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    queue<long>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
       t=q.front();
       q.pop();
       for(auto g:adj_list[t])
       {
        if(!vis[g])
        {
            q.push(g);
            vis[g]=1;
            p[g]=t;
        }
       }
    }
    if(p[n]==0)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    pv.push_back(n);
    t=p[n];
    while(t!=1)
    {
        pv.push_back(t);
        t=p[t];
        //cout<<t<<endl;
        c++;
        if(t==0)
        {
            cout<<"IMPOSSIBLE";
            return 0;
        }
    }    
    pv.push_back(t);
    cout<<pv.size()<<endl;
    for(auto it=pv.rbegin();it!=pv.rend();it++)
    {
        cout<<*it<<" ";
    } 
 
 
 
  return 0;
}
