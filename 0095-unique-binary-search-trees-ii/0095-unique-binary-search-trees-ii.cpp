class Solution {
public:
    vector<TreeNode*> solve(int l, int r) {
        if (l > r) return {nullptr};

        vector<TreeNode*> ans;
        for (int root = l; root <= r; root++) {
            vector<TreeNode*> leftTrees = solve(l, root - 1);
            vector<TreeNode*> rightTrees = solve(root + 1, r);

            for (TreeNode* left : leftTrees) {
                for (TreeNode* right : rightTrees) {
                    TreeNode* node = new TreeNode(root);

                    node->left = left;
                    node->right = right;

                    ans.push_back(node);
                }
            }
        }

        return ans;
    }

    vector<TreeNode*> generateTrees(int n) {
        return solve(1, n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna