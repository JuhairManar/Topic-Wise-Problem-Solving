// link - https://cses.fi/problemset/task/1755

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
    string s,f,r;
    cin>>s;
    map<char,int>m;
    for(auto g:s){
        m[g]++;
    }          
    
    char mid;
    int tr=0,n=s.size(),i;
    for(auto g:m){
        tr+=g.second%2;
        if(g.second%2) mid=g.first;
    }

    if(tr>1){
        cout<<"NO SOLUTION";
        return 0;
    }

    if(n%2==0 && tr){
        cout<<"NO SOLUTION";
        return 0;
    }

    for(auto g:m){
        int p=g.second/2;
        for(i=0;i<p;i++){
            f+=g.first;
            r+=g.first;
        }
    }
    if(n%2) f+=mid;
    reverse(r.begin(),r.end());
    cout<<f<<r;


  return 0;
}
