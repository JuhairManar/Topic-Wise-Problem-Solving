// link-https://cses.fi/problemset/task/1076

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define pb push_back
template<typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
   ll n,i;       
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n,k,i,j;
    cin>>n>>k;
    vector<int>v(n),we(n-k+1);
    ordered_set<int>st;
    for(auto &g:v) cin>>g;

    for(i=0;i<k;i++){
        st.insert(v[i]);
    }

    // for(auto g:st) cout<<g<<" ";
    we[0]=*st.find_by_order((k-1)/2);

    // st.erase(st.order_of_key(v[0]));
    st.erase(st.find_by_order(st.order_of_key(v[0])));

    i=1;
    for(j=k;j<n;j++){
        st.insert(v[j]);
        // for(auto g:st) cout<<g<<" ";
        // cout<<endl;
        we[i]=*st.find_by_order((k-1)/2);
        // st.erase(st.order_of_key(v[i]));
        // st.erase(v[i]);
        st.erase(st.find_by_order(st.order_of_key(v[i])));
        i++;
    }
    for(i=0;i<n-k+1;i++) cout<<we[i]<<" ";


  return 0;
}
