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
    vector<int> result;
    void inorder(TreeNode* node){
        if(!node) return;
        inorder(node->left);
        result.push_back(node->val);
        inorder(node->right);
    }
public:
    bool isValidBST(TreeNode* root) {
       inorder(root);
       for(int i=1;i<result.size();i++){
        if(result[i]<=result[i-1]){
            return false;
        }
       }
       return true;
    }
};