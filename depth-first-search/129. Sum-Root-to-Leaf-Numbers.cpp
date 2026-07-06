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
    vector<int> nums;
    void dfs(TreeNode* root, int val){
        if(!root) return;

        val=(val*10)+root->val;
        if(!root->left && !root->right){
            nums.push_back(val);
            return;
        }

        dfs(root->left,val);
        dfs(root->right,val);
    }
public:
    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        int result=0;
        for(int num:nums){
            result+=num;
        }
        return result;
    }
};