// link - https://codeforces.com/problemset/problem/1669/F

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long i=0,j=n-1,a=0,b=0,mx=0;
        vector<long>v(n,0);

        for(i=0;i<n;i++) cin>>v[i];

        i=0;
        while(i<j){

            // cout<<"YES\n";
            if(a+v[i]>b+v[j]){
                b+=v[j];
                j--;
            }
            else if(a+v[i]<b+v[j]){
                a+=v[i];
                i++;
            }

            else{
                mx=(i+1+n-j);
                a+=v[i];
                b+=v[j];
                i++;j--;
            }
        }

        cout<<mx<<"\n";
    }


  return 0;
}
