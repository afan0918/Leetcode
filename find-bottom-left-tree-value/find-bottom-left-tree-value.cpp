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
	int result,deep=-1;
	void dfs(TreeNode* root,int step) {
		if(!root) return;
		if(step>deep) {
            result=root->val;
            deep=step;
        }
		dfs(root->left,step+1);
		dfs(root->right,step+1);
	}
public:
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
		return result;
    }
};