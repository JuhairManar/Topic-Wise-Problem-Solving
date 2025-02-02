// link - https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/?purpose=login&source=problem-page&update=github


#include<bits/stdc++.h>

using namespace std;

#define ll long long


/* 
  initialize r=1e5;
 */

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll t,k,a,b,c,l,r;
    cin>>t;

    while(t--){
        cin>>a>>b>>c>>k;

        l=0;r=1e5;

        ll mid,ans=k;

        while(l<=r){
            mid=(l+r)/2;


            if( (a*mid*mid) + (b*mid) + (c) >=k)
            {
                ans=mid;
                r=mid-1;
                
            }

            else{
                l=mid+1;
            }

        }
        cout<<ans<<"\n";
    }                        


  return 0;
}
