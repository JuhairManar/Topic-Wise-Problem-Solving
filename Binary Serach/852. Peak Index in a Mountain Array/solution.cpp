// link - http://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int l=0,r=arr.size()-1,mid=(l+r)/2,max=arr[mid],maxp=mid;
    while(l<=r)
    {
        if(arr[mid]>max)
        {
            max=arr[mid];
            maxp=mid;
        }
        if((arr[mid+1]>max) ||(arr[mid+1]>arr[mid]))
        {
            l=mid+1;
        }
        else if((arr[mid-1]>max) || (arr[mid-1]>arr[mid]))
        {
            r=mid-1;
        }
        else
        {
            break;
        }
        mid=(l+r)/2;
    }
    return maxp;  
    }
};
