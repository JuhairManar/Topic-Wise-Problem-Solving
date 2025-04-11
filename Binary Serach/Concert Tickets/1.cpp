// link - https://cses.fi/problemset/task/1091


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    long n,k,i,d;
    cin>>n>>k;
    multiset<long>m;
    for(i=0;i<n;i++){
        cin>>d;
        m.insert(d);
    }

    while(k--){
        cin>>d;

        if(m.size()==0) cout<<"-1\n";
        else{
            auto it=m.upper_bound(d);
            if(it==m.begin()) cout<<"-1\n";
            else{
                cout<<*(--it)<<"\n";
                m.erase(it);
            }
        }


    }

  return 0;
}
