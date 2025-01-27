// link - https://www.spoj.com/problems/MATHLOVE/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    ll t,n,a=1,b=1,c,d,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        c=-(2*n);

        d=(b*b)-(4*c);
        // if( d<0 ) {
        //     cout<<"NAI\n";
        //     continue;
        // }

        double dd=sqrt(d);

        // if(ceil(sqrt(d))!=floor(sqrt(d))){
        //     cout<<"NAI\n";
        //     continue;
        // }

        if(isnan(dd) || (ceil(dd)!=floor(dd))){
            cout<<"NAI\n";
            continue;
        }

        x=((-b+sqrt(d)))/2;
        y=((-b-sqrt(d)))/2;

        if(x<=0 && y<=0){
            cout<<"NAI\n";
            continue;
        }
        else {
            if(x>0) cout<<x<<"\n";
            else cout<<y<<"\n";
        }
    }                                    


  return 0;
}
