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
    priority_queue<int> pq;

    void dfs(TreeNode* node,int k){
        if(!node) return;
        dfs(node->left,k);
        dfs(node->right,k);
        pq.push(node->val);
        while(pq.size()>k){
            pq.pop();
        }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        dfs(root,k);
        return pq.top();
    }
};