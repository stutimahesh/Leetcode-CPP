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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root){ return {}; }

        vector<vector<int>> result;
        q.push(root);

        while(!q.empty()){
            int qSize=q.size();
            vector<int> temp;

            for(int i=0;i<qSize;i++){
                TreeNode* curr= q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                temp.push_back(curr->val);
            }

            result.push_back(temp);
        }

        reverse(result.begin(), result.end());
        return result;
    }
};