// link - https://leetcode.com/problems/validate-binary-search-tree/description/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void tra(TreeNode* root,vector<int>&v,bool &f){
        if(root==NULL) return;
        tra(root->left,v,f);
        if(v.empty()) v.push_back(root->val);
        else{
            if(v.back()<root->val) v.push_back(root->val);
            else{
                f=0;
                return;
            }
        }
        tra(root->right,v,f);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>v;
        bool f=1;
        tra(root,v,f);
        for(auto g:v) cout<<g<<" ";
        cout<<endl;
        return f;
    }
};
