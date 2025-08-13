// link - https://vjudge.net/problem/UVA-543

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const int N=(int) ((1e6)+1);
bitset<N>ip;

void solve(int n,vector<int>&primes){

    int i,j,k;
    for(i=0;i<primes.size() && primes[i]<=n/2;i++)
    {
        int a=primes[i],b=n-a;
        if(ip[b]==0){
            cout<<n<<" = "<<a<<" + "<<b<<"\n";
            return;
        }
    }
    cout<<"Goldbach's conjecture is wrong.\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll n,i,j,k;
    ip[0]=1;
    ip[1]=1;
    vector<int>primes;
    for(i=2;i<=(1e6);i++){
        if(ip[i]==1) continue;
        primes.pb(i);
        for(j=i*i;j<=(1e6);j+=i){
            ip[j]=1;
        }
    }
    
    while(1){
        cin>>n;
        if(n==0) break;
        solve(n,primes);
    }


  return 0;
}
