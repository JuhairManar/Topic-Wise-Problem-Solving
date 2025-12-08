// link - https://leetcode.com/problems/maximize-distance-to-closest-person/description/

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int i,n=seats.size(),mx=0,prev=0,f=0;
        for(i=0;i<n;i++){
            if(seats[i]==1 && f){
                mx=max(mx,(i-prev)/2);
                prev=i;
                //f=1;
            }
            else if(seats[i]==1 && f==0){
                mx=max(mx,i-prev);
                prev=i;
                f=1;
            }
        }
        
        mx=max(mx,n-1-prev);
        return mx;
    }
};
