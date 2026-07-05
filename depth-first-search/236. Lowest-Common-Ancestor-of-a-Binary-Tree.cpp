/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lca(TreeNode* node, TreeNode* p, TreeNode* q){
        if(!node) return nullptr;
        if(node->val==p->val) return node;
        if(node->val==q->val) return node;

        TreeNode* left=lca(node->left,p,q);
        TreeNode* right=lca(node->right,p,q);

        if(left && right) return node;
        else if(left!=nullptr) return left;
        else return right;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root,p,q);
    }
};