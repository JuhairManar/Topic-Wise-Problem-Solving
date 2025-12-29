// https://leetcode.com/problems/merge-two-binary-trees/description/

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
    TreeNode* merge(TreeNode* nt,TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2) return NULL;
        nt->val+=(root1)?root1->val:0;
        nt->val+=(root2)?root2->val:0;

        bool f1=(root1 && root1->left);
        bool f2=(root2 && root2->left);

        if(f1 || f2){
            TreeNode* lnd=new TreeNode(0);
            nt->left=lnd;
            TreeNode* lrc1=(root1)?root1->left:NULL;
            TreeNode* lrc2=(root2)?root2->left:NULL;

            merge(lnd,lrc1,lrc2);
        }

        f1=(root1 && root1->right);
        f2=(root2 && root2->right);

        if(f1 || f2){
            TreeNode* rnd=new TreeNode(0);
            nt->right=rnd;
            TreeNode* rrc1=(root1)?root1->right:NULL;
            TreeNode* rrc2=(root2)?root2->right:NULL;

            merge(rnd,rrc1,rrc2);
        }

        return nt;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return NULL;
        TreeNode* nt=new TreeNode(0);

        nt=merge(nt,root1,root2);

        return nt;
    }
};
