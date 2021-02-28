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
private:
	int sum=0;
	int dfs(TreeNode* root) {
		if(!root) return 0;
		int left=dfs(root->left);
		int right=dfs(root->right);
		sum+=abs(left-right);
		return root->val+left+right;
	}
public:
    int findTilt(TreeNode* root) {
        dfs(root);
		return sum;
    }
};