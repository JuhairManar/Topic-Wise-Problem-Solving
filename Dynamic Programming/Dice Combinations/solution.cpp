//link-https://cses.fi/problemset/task/1633
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long n,mod=(1e9)+7,i,j;
    cin>>n;
    vector<long long>v(n+1,0);
    for(i=1;i<=6 && i<=n;i++)
    {
        v[i]=1;
    }          
    for(i=1;i<=n;i++)
    {
        if(!v[i])
        {
            continue;
        }
        for(j=1;j<=6;j++)
        {
            if(i+j<=n)
            {
                v[i+j]=v[i]+v[i+j];
                v[i+j]%=mod;
            }
        }
    }                      
    cout<<v[n];
 
 
  return 0;
}
