// link - https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V


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
    string s;
    cin>>s;
    
    // cout<<s.find("BRITISH");

    while(s.find("EGYPT")<s.size()){
        s.replace(s.find("EGYPT"),5," ");
    }

    cout<<s;
    
  return 0;
}
