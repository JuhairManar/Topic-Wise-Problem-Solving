// link - https://leetcode.com/problems/k-closest-points-to-origin/description/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>vv,temp;
        for(auto g:points){
            int a=g[0];
            int b=g[1];
            int c=(a*a)+(b*b);
            temp.push_back({c,a,b});
        }
        sort(temp.begin(),temp.end());

        for(int i=0;i<k;i++){
            vv.push_back({temp[i][1],temp[i][2]});
        }

        return vv;
    }
};
