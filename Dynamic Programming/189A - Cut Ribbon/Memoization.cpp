// link - https://codeforces.com/contest/189/problem/A


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int solve(int n,int a,int b,int c,vector<int>&v){
    // cout<<n<<" "<<cn<<endl;
    if(n==0) {
        // cout<<cn<<endl;
        return 0;
    }
    if(n<0){
        return -10000;
    }

    if(v[n]){
        // cout<<v[n]<<endl;
        return v[n];
    }
    
    int x=solve(n-a,a,b,c,v);
    int y=solve(n-b,a,b,c,v);
    int z=solve(n-c,a,b,c,v);

    v[n]=1+max({x,y,z});

    // cout<<v[n]<<endl;

    return v[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    vector<int>v(n+1,0);

    cout<<solve(n,a,b,c,v);


  return 0;
}
