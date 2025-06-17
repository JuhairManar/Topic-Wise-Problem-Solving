class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int mx=0,i;

        for(auto g:sen){
            int c=count(g.begin(),g.end(),' ');

            mx=max(mx,c+1);
        }

        return mx;
    }
};
