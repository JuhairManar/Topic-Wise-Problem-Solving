// link - https://codeforces.com/contest/514/problem/B

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
    double n,x,y,a,b;
    set<double>st;
    cin>>n>>a>>b;
    while(n--){
        cin>>x>>y;
        x-=a;
        y-=b;
        st.insert((x==0)?1e12:y/x);
    }           
    cout<<st.size();                         


  return 0;
}
