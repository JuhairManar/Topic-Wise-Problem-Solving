class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i,n=nums.size();
        vector<long>pre(n+1,0);
        for(i=1;i<=n;i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        for(i=1;i<=n;i++){
            if(pre[i-1]==pre[n]-pre[i]){
                return i-1;
            }
        }
        return -1;
    }
};
