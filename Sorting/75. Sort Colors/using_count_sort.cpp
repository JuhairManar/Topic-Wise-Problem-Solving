class Solution {
public:
    void sortColors(vector<int>& v) {
        int a[3]={},n=v.size(),c=0,i,j;
        for(i=0;i<n;i++)
        {
            a[v[i]]++;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<a[i];j++)
            {
                v[c]=i;
                c++;
            }
        }
    }
};
