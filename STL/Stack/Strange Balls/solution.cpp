// link - https://vjudge.net/contest/682494#problem/K

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    stack<long>store;
    stack<pair<long,long>>count;
    long n,d,tc;
    cin>>n;
    while(n--){
        cin>>d;
        store.push(d);

        if(count.empty() || count.top().first!=d){
            count.push({d,1});
        }

        else{
            count.top().second++;
        }

        if(d>=2 && count.top().first==d && count.top().second==d){
            tc=d;
            while(tc--){
                store.pop();
            }
            count.pop();
        }

        cout<<store.size()<<"\n";

        
    }                                    


  return 0;
}
