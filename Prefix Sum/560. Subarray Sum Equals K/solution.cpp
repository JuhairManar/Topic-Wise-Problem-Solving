// link - https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),i,c=0,s=0;
        vector<long>v(n+1,0);
        unordered_map<long,long>m;
        m[0]=1;
        for(i=0;i<n;i++){
            s+=nums[i];
            c+=m[s-k];
            m[s]++;
        }

        return c;
    }
};
