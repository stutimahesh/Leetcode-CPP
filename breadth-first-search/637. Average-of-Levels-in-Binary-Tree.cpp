class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> result;

        if(!root) return {};

        q.push(root);

        while (!q.empty()) {
            int qSize = q.size();
            long long sum = 0;

            for (int i = 0; i < qSize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                sum +=curr->val;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            result.push_back((double)sum / qSize);
        }
        return result;
    }
};