// link - https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),i;
        k=k%n;
        vector<int>nv;
        for(i=n-k;i<n;i++){
            nv.push_back(nums[i]);
            nums.pop_back();
        }
        for(i=0;i<nums.size();i++) nv.push_back(nums[i]);
        nums.clear();
        nums=nv;

    }
};
