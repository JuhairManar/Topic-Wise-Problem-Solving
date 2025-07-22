class Solution {
public:
    int maxDepth(string s) {
        size_t mx=0;
        stack<char>st;
        for(auto g:s){
            if(g=='(') {
                st.push(g);
                mx=max(mx,st.size());
                continue;
            }
            if(g==')') st.pop();
        }

        return mx;
    }
};
