// link - https://codeforces.com/contest/1520/problem/D

/* 
    algorithm

    given condition- a[i]-a[j]==i-j

    lets , modify the equation

    a[i]-i=a[j]-j

    now, make an array for the equation

    index- 1 , 2 , 3
    value- 1,  2,  3

    array accroding to the equation

    0, 0 , 0

    now , the pair number
 */


#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long t,n,i,d;
    cin>>t;
    while(t--){
        unordered_map<long,long long>m;
        long long s=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>d;
            s+=m[i-d];
            m[i-d]++;
        }

        // for(auto g:m){
        //     s+=(g.second*(g.second-1))/2;
        // }

        cout<<s<<"\n";
    }                                    


  return 0;
}
