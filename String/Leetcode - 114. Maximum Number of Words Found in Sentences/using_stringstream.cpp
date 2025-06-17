class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int mx=0,i;

        for(auto g:sen){
            string word;
            int c=0;
            stringstream ss(g);
            while(ss>>word) c++;

            mx=max(mx,c);
        }

        return mx;
    }
};
