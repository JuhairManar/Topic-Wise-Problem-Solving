// link - https://atcoder.jp/contests/abc351/submissions/61519259

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long n,i,x;
    cin>>n;
    stack <long>st;
    vector<long>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }     

    st.push(v[0]);

    for(i=1;i<n;i++){
        x=v[i];
        while(!st.empty() && x==st.top()){
            st.pop();
            x++;
        }
        st.push(x);
    }                               

    cout<<st.size();

  return 0;
}
