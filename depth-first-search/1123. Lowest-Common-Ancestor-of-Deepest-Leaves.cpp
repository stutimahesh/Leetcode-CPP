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
    pair<int,TreeNode*> depth(TreeNode* node){
        if(!node) return {0, nullptr};

        auto leftNode=depth(node->left);
        auto rightNode=depth(node->right);

        int d1=leftNode.first;
        int d2=rightNode.first;

        if(d1==d2){
            return {d1+1, node};
        }if(d1>d2){
            return {d1+1,leftNode.second};
        }else{
            return {d2+1,rightNode.second};
        }
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return depth(root).second;
    }
};