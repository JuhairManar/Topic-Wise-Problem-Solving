class Solution {

    bool isok(vector<int>& nums,int mid,int m){
        int n=nums.size(),i,c=1,temp=0;
        for(i=0;i<n;i++){
            if(temp+nums[i]<=mid){
                temp+=nums[i];
            }
            else{
                c++;
                if(c>m || nums[i]>mid) 
                {
                    return 0;
                }
                temp=nums[i];
            }
        }
        return 1;

    }
public:
    int splitArray(vector<int>& nums, int k) {
        int hi=0,lo=0,ans=0,mid;

        for(auto g:nums) hi+=g;

        while(lo<=hi){
            mid=(lo+hi)/2;

            if (isok(nums,mid,k)){
                hi=mid-1;
                ans=mid;
            }
            else{
                lo=mid+1;
            }

        }

        return ans;
    }
};
