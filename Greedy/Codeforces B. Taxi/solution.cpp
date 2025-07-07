//link-https://codeforces.com/problemset/problem/158/B

// #pragma GCC optimize("Ofast")
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
    int a[5]={},s=0,i,d,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d;
        a[d]++;
    }          
    
    // for 4
    s+=a[4];
    // cout<<s<<endl;

    // for 3 and 1 com
    int mn=min(a[3],a[1]);
    a[3]-=mn;a[1]-=mn;
    s+=mn;

    // for only 3

    s+=a[3];
    // cout<<s<<endl;

    // for 2s pair

    int p2=a[2]/2;
    s+=p2;
    a[2]-=p2*2;

    // for 2 and 1 com

    if(a[2]){
        s+=1;
        a[1]=max(0,a[1]-2);
    }
    // cout<<s<<endl;
    // only for 2s

    // only for 1s
    s+=(a[1]%4==0?a[1]/4:(a[1]/4)+1);


    cout<<s;


  return 0;
}
