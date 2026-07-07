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
    unordered_set<int> del;
    vector<TreeNode*> result;
    TreeNode* dfs(TreeNode* node, bool isRoot){
        if(node==nullptr) return nullptr;

        bool deleted= del.count(node->val);

        if(isRoot && !deleted){
            result.push_back(node);
        }

        node->left= dfs(node->left, deleted);
        node->right= dfs(node->right, deleted);

        if(deleted) return nullptr;
        return node;
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        del.insert(to_delete.begin(), to_delete.end());
        dfs(root, true);
        return result;
    }
};