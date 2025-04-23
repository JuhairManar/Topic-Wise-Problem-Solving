// link- https://atcoder.jp/contests/abc283/tasks/abc283_d?lang=en

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    string s;
    cin>>s;

    int arr[26]={0},i,n=s.size(),t;

    stack<pair<char,int>>par,ch;

    for(i=0;i<n;i++){

      if(s[i]=='('){
        par.push({s[i],i});
        continue;
      }

      if(s[i]>='a' && s[i]<='z'){
        if( arr[s[i]-'a'] ){
          cout<<"No";
          return 0;
        }

        ch.push({s[i],i});
        arr[s[i]-'a']=1;
      }

      else{

        if(par.size()==0){
          cout<<"No";
          return 0;
        }

        t=par.top().second;
        par.pop();

        t=i-t-1;
        while(ch.size() && t--){l/.
          arr[ch.top().first-'a']=0;
          ch.pop();
        }
      }
    }

    if(par.size() || ch.size()){
        cout<<"No";
    }

    else cout<<"Yes";
                                        


  return 0;
}
