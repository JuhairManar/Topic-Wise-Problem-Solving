// link - https://leetcode.com/problems/daily-temperatures/description/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v(temperatures.size());
        stack<pair<int,int>>st;
        for(int i=0;i<temperatures.size();i++){
            if(st.empty()) st.push({temperatures[i],i});
            else{
                while(st.size() && st.top().first<temperatures[i]){
                    v[st.top().second]=i-st.top().second;
                    st.pop();
                }
                st.push({temperatures[i],i});
            }
        }

        return v;
    }
};
