class Solution {
public:

    static bool cmp(vector<int>a,vector<int>b){
        if(a[0]<b[0]) return 1;
        return 0;
    }
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);


        sort(intervals.begin(),intervals.end(),cmp);

        vector<vector<int>>v;

        int n=intervals.size(),i,j,a=-1,b=-1;

        for(auto g:intervals){
            cout<<g[0]<<" "<<g[1]<<endl;
        }

        for(i=0;i<n;i++){
            if(a==-1){
                a=intervals[i][0];
            }
            if(b==-1){
                b=intervals[i][1];
            }

            //overlaping
            if(i+1<n && b>=intervals[i+1][0]){
                cout<<"i= "<<i<<" YES\n";
                b=max({b,intervals[i+1][1],intervals[i][1]});
            }

            else{
                v.push_back({a,b});
                a=-1;
                b=-1;
            }
        }

        return v;
    }
};
