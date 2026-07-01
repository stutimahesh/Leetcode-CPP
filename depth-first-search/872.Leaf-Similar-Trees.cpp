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
    vector<int> root1_leaves;
    vector<int> root2_leaves;

    void leafNodes(TreeNode* root, vector<int> &leaves){
        if(!root) return;

        if(!root->left && !root->right){
            leaves.push_back(root->val);
            return;
        }

        if(root->left) leafNodes(root->left,leaves);
        if(root->right) leafNodes(root->right,leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        root1_leaves.clear();
        root2_leaves.clear();

        leafNodes(root1,root1_leaves);
        leafNodes(root2,root2_leaves);

        if (root1_leaves.size()!=root2_leaves.size()) return false;

        for(int i=0;i< root1_leaves.size(); i++){
            if(root1_leaves[i]!=root2_leaves[i]) return false;
        }

        return true;
    }
};