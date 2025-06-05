//link-https://cses.fi/problemset/task/1141
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    // unordered_map<long,int>mp;
    map<long,int>mp;
    long i,j=0,n,a,b,d,m=0;
    cin>>n;
    long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];   
    }       
    for(i=0;i<n;i++)
    {
        if(mp[arr[i]]==0)
        {
            mp[arr[i]]++;
            m=max(m,i-j+1);
        }
        else
        {
            while(mp[arr[i]]!=0)
            {
                mp[arr[j]]--;
                j++;
            }
            mp[arr[i]]++;
        }
    }     
    cout<<m;             
 
 
  return 0;
}
