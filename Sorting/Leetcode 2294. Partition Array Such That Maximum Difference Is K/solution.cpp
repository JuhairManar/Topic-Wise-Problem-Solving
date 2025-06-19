// link - https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/?envType=daily-question&envId=2025-06-19


class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),mn=nums[0],i,c=1;
        for(i=1;i<n;i++){
            if(nums[i]-mn>k){
                c++;
                mn=nums[i];
            }
        }

        return c;
    }
};
