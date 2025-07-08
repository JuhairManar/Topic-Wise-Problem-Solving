// link - https://leetcode.com/problems/subsets/description/

class Solution {
public:

    void solve(int i,int n,vector<vector<int>>&vs , vector<int>&v,vector<int>&ss){
    if(i>=n){
        vs.push_back(ss);
        return;
    }

    // take not take

    // ss.push_back(v[i]);
    // solve(i+1,n,vs,v,ss);
    // ss.pop_back();
    // solve(i+1,n,vs,v,ss);


    // not take and take
    solve(i+1,n,vs,v,ss);
    ss.push_back(v[i]);
    solve(i+1,n,vs,v,ss);
    ss.pop_back();

    // for(int j=i;j<n;j++){
    //     ss.push_back(v[j]);
    //     solve(j+1,n,vs,v,ss);
    //     vs.push_back(ss);
    //     ss.pop_back();
    // }
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vs;
        vector<int>ss;
        // vs.push_back(ss);
        solve(0,nums.size(),vs,nums,ss);
        return vs;
    }
};
