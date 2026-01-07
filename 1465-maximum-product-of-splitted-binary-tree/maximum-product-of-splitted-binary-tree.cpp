class Solution {
public:
    long long totalSum = 0;
    long long maxproduct = 0;
    const int MOD = 1e9 + 7;

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        long long left = dfs(root->left);
        long long right = dfs(root->right);

        long long subSum = root->val + left + right;

        maxproduct = max(maxproduct, subSum * (totalSum - subSum));

        return subSum;
    }

    int maxProduct(TreeNode* root) {
        totalSum = treeSum(root);
        dfs(root);
        return maxproduct % MOD;
    }

    long long treeSum(TreeNode* root) {
        if (!root) return 0;
        return root->val + treeSum(root->left) + treeSum(root->right);
    }
};
