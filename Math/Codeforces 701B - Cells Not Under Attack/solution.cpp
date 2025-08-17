// link - https://codeforces.com/problemset/problem/701/B

// algrithm

// at first we can see it covers number of the full row and the full column
// but the colum and row intersects. intersection of a column and row causes 1 overlapping

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
    ll i,n,m,a,b,area;
    cin>>n>>m;
    area=n*n;
    set<int>rows,cols;
    for(i=0;i<m;i++){
        cin>>a>>b;
        rows.insert(a);
        cols.insert(b);
        ll rs=rows.size(),cs=cols.size();
        cout<<area-((n*(rs+cs))-(cs*rs))<<" ";

    }


  return 0;
}
