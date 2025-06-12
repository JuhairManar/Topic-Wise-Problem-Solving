class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

        sort(special.begin(),special.end());

        int mx,i,c=0,n=special.size();

        mx=max({0,special[0]-bottom});

        for(i=1;i<n;i++){
            mx=max({0,special[i]-special[i-1]-1,mx});
        }

        mx=max({0,top-special[n-1],mx});
        return mx;
    }
};
