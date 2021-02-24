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
	vector<int> result;
	void dfs(TreeNode* root,int step) {
		if(!root) return;
		if(result.size()==step) result.push_back(root->val);
		result[step]=max(result[step],root->val);
		dfs(root->left,step+1);
		dfs(root->right,step+1);
	}
public:
    vector<int> largestValues(TreeNode* root) {
        dfs(root,0);
		return result;
    }
};