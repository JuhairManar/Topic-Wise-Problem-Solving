class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<float>st;
        int i,j;
        float r;
        string s1,s2=to_string(n),s3;
        vector<string>s;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                r=float(i)/float(j);
                if(st.find(r)==st.end())
                {
                    st.insert(r);
                    s1=to_string(i);
                    s2=to_string(j);
                    s3=s1+"/"+s2;
                    s.push_back(s3);
                }
            }
        }
        return s;
    }
};
