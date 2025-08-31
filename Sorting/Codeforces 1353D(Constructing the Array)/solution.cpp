// link - https://codeforces.com/problemset/problem/1353/D

#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

struct cmp{
	bool operator()(tuple<int,int,int>t1,tuple<int,int,int>t2){
		// if(get<0>(t1) < get<0>(t2)) return 1;
		if(get<0>(t1) == get<0>(t2)){
			return get<1>(t1) > get<1>(t2);
		}
		return get<0>(t1) < get<0>(t2);
	}
};


void solve(){
	int i=1,n,l,r;
	cin>>n;
	vector<int>v(n+1,0);
	priority_queue<tuple<int,int,int>,vector<tuple<int, int, int>>,cmp>pq;
	pq.push(make_tuple(n,1,n));
	while(pq.size()){
		auto g=pq.top();
		pq.pop();
		l=get<1>(g),r=get<2>(g);
		int mid;
		if((r-l+1)%2){
			mid=(l+r)/2;
		}
		else{
			mid=(l+r-1)/2;
		}
		v[mid]=i++;
		int l1=l,r1=mid-1,l2=mid+1,r2=r;
		if(r1-l1>=0){
			pq.push(make_tuple(r1-l1,l1,r1));
		}
		if(r2-l2>=0){
			pq.push(make_tuple(r2-l2,l2,r2));
		}
	}

	for(i=1;i<=n;i++) cout<<v[i]<<" ";
	cout<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
	freopen(output.txt, 'w', stdout); */
	int t;
	cin>>t;
	while(t--) solve();                                    


  return 0;
}
