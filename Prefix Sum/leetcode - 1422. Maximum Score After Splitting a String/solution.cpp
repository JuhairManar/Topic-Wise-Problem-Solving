class Solution {
public:
    int maxScore(string s) {
        int i,j,n=s.size(),mx=0;
        vector<int>pre_0(n+2,0),pre_1(n+2,0),suf_0(n+2,0),suf_1(n+2,0);
        for(i=0;i<n;i++)
        {
            if(s[i]=='0'){
                pre_0[i+1]=pre_0[i]+1;
            }
            else{
                pre_0[i+1]=pre_0[i];
            }
        }

        for(i=n-1;i>=0;i--){
            if(s[i]=='1'){
                suf_1[i+1]=suf_1[i+2]+1;
            }
            else{
                suf_1[i+1]=suf_1[i+2];
            }
        }

        for(i=1;i<n;i++){
            mx=max(pre_0[i]+suf_1[i+1],mx);
        }

        return mx;


    }
};
