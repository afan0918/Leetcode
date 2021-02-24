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
	int maxnum=0;
	int dfs(TreeNode* root){
		if(!root) return 0;
		int l=dfs(root->left),r=dfs(root->right);
		maxnum=max(maxnum,l+r);
		int sum=max(l,r);
		return 1+sum;
	}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
		return maxnum;
    }
};