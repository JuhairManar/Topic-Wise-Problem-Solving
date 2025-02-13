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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vv;
        int c=0;

        if(!root) return vv;

        // create a queue for traversal

        queue<TreeNode*>q;

        // push root node to the queue
        q.push(root);

        // push Null to the queue for sepearating level

        q.push(NULL);

        vv.push_back({});
        // vv[c++].push_back(root->val);

        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();

            if(t){
                // cout<<"YES\n";
                vv[c].push_back(t->val);    //pushing the value to the vector

                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }

            else{
                if(!q.empty()) // it means for level remaining
                {
                    q.push(NULL);

                    // if there are level remaining
                    vv.push_back({});
                }

                // as a level completed we need to level up
                c++;
            }
        }

        return vv;
    }
};
