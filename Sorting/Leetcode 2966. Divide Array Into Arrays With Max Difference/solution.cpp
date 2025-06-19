// link - https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/


class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size(),i,c=0;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());

        

        for(i=0;i<n;i+=3){
            if(nums[i+2]-nums[i]>k){
                return {};
            }

            v.push_back({nums[i],nums[i+1],nums[i+2]});
        }

        return v;
    }
};
