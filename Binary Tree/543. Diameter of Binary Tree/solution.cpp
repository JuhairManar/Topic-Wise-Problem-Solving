// link - https://leetcode.com/problems/diameter-of-binary-tree/

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

    int dm(TreeNode* root,int &c){
        if(!root) return 0;

        int ld=dm(root->left,c);
        int rd=dm(root->right,c);

        c=max(c,ld+rd);

        return 1+max(ld,rd);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int c=0;

        dm(root,c);

        return c;
    }
};
